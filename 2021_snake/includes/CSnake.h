#pragma once
#include <utility>
#include <vector>
#include <map>


class CSnake
{
private:
    std::pair<int,int> tete={0,0};
    std::vector<std::pair<int,int>> snake;
    std::pair<int,int> queue={0,0};


public:
    CSnake(/* args */);
    ~CSnake();
public:

    std::pair<int,int> snake_init(CSnake &snaketot, const int &snake_size);

    void snake_growth(CSnake &snaketot, const std::pair<int,int> &ancient_queue);
    std::pair<int,int> pop_front(CSnake &snaketot);
    //void push_front(CSnake &snaketot, std::pair<int,int> &valeur);

    bool snake_eat_himself(const CSnake &snaketot);
    bool snake_touch_borders(const CSnake &snaketot,const std::map<std::pair<int,int>,bool> &borders_map );

    std::pair<int,int> find_queue(const CSnake &snaketot);
    std::pair<int,int> find_head(const CSnake &snaketot);

    std::vector<std::pair<int,int>> the_vector(const CSnake &snaketot);

};