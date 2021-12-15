#include <iostream>
#include <string>

int main(int argc, char** argv){
    int somme;
    somme=0;
    for(int i =1 ; i < argc ; i++ ){
        somme=somme + atoi(argv[i]);
        std::cout << argv[i] << " 2eme " << **argv << " 3eme " << *argv[i] << std::endl;
    }
std::cout << somme << std::endl;

std::cout << "AUTRE FACON" << std::endl;
int s;
s=0;



for(int i =1 ; i < argc ; i++ ){
    std::string a;
    a = argv[i];

    s=s + std::stoi(a);
}
std::cout << s << std::endl;


}