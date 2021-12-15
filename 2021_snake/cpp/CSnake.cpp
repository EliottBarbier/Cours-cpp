#include "CSnake.h"

CSnake::CSnake(/* args */)
{
}
CSnake::~CSnake()
{
}

std::vector<std::pair<int,int>> CSnake::the_vector(const CSnake &snaketot){
    return(snaketot.vector)
}

std::pair<int,int> CSnake::find_queue(const CSnake &snaketot){
    std::pair<int,int> queue = snaketot.queue
    return(queue)
}

std::pair<int,int> CSnake::find_head(const CSnake &snaketot){
    return(snaketot.head)
}

std::pair<int,int> CSnake::snake_init(CSnake &snaketot, const int &snake_size){

        for(int i=0; i<snaketot.snake.size();i++){
        snaketot.snake.pop_back();
    }


    int x = 2; //On démarre en haut à droite de la grille
    int y = snake_size+1;
    for(int i =2;i<=snake_size+1;i++){ //Je définis le snake à afficher initialement, pn peut le mettre dans le void sanke_init
        std::pair<int,int> pix {x,i};
        snaketot.snake.push_back(pix);
    }
    snaketot.head=snaketot.snake[0]
    snaketot.queue=snaketot.snake.back()

    std::pair<int,int> posi {x,y};
    return posi;
}

bool CSnake::snake_touch_borders(const CSnake &snaketot,const std::map<std::pair<int,int>,bool> &borders_map ){
    bool exists = borders_map.find(snaketot.snake.back()) != borders_map.end(); //Pour savoir si la clé est définie
    if (exists){
        return(borders_map[snaketot.snake.back()]); //Si dans la map on a true ça veut dire ue c'est une bordure. Bon après avec ce 
        //que j'ai fait les seules clés allouée sont des true mais bon...
    }   //On est sur de pas modifier la map comme on a vérifié que la clé existait belle et bien
    else{
    return(exists);
    }
}

bool CSnake::snake_eat_himself(const CSnake &snaketot){

    std::pair<int,int> fin = snaketot.snake.back(); //Ou snake.head
    for(int i=0;i<snaketot.snake.size()-1;i++){ //J'itère sur les indices et pas sur les éléments car je ne veux pas la tête du serpent.
        if (snaketot.snake[i]==fin){
            return(true);
        }

    }
    return(false);
}

void CSnake::snake_growth(CSnake &snaketot, const std::pair<int,int> &ancient_queue){

    snaketot.snake.push_back(snaketot.snake.back()); //La size augmente de 1, revient à faire une fonction pop front

    for( int i =snaketot.snake.size()-2; i>=1;i--){
        snaketot.snake[i]=snaketot.snake[i-1];
    }
    snaketot.snake[0]=ancient_queue;
    snaketot.queue=ancient_queue;

}
std::pair<int,int> CSnake::pop_front(CSnake &snaketot){
    std::pair<int,int> queue;
    queue=snaketot.snake[0];
    for( int i =0; i<snaketot.snake.size()-1;i++ ){
        snaketot.snake[i]=snaketot.snake[i+1];

    }
    snaketot.snake.pop_back();
    snaketot.queue=snaketot.snake[0]
    return(queue);
}