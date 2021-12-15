#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv){
    std::vector<std::string> v {"+","-","/","x"};
    std::cout << v.at(0) << std::endl;
    // v.back() renvoie le dernier
    // v.size() pour la longueur
    v.push_back("r");
    std::cout << v.back() << std::endl;
    v.pop_back();
    std::cout << v.back() << std::endl;

    std::vector<float> vect;
    for( int i = 1; i < argc; i++ ){
        std::string a = argv[i];
        if(a == "+"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c+b);
        }
        else if(a=="-"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c-b);

        }
        else if(a=="x"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c*b);
        }
        else if(a=="/"){
            float b=vect.back();
            vect.pop_back();
            float c=vect.back();
            vect.pop_back();
            vect.push_back(c/b);
        }
        else{
            vect.push_back(std::stof(a));
        }
    }
    float result = vect.back();

    std::cout << "Le résultat est : " <<  result << std::endl;

}