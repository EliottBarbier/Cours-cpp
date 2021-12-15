#include <iostream>
#include "Cmat.h"

int main(int argc,char** argv){

Cmat a;
std::vector<std::vector<float>> voulu;
std::vector<float> ligne1 {1,2};
std::vector<float> ligne2 {4,5};
voulu.push_back(ligne1);
voulu.push_back(ligne2);
a.init(voulu);

Cmat b;
b.identity(2,2); //C'est 2 fois l'identité, de taille 2.

//std::cout << a.get_shape().first << a.get_shape().second << std::endl;

Cmat c;
c=a*b;
std::cout << c.get_shape().first << c.get_shape().second << std::endl;
std::cout << c.get_val(0,0) << "|" << c.get_val(0,1) << std::endl;
std::cout << c.get_val(1,0) << "|" << c.get_val(1,1) << std::endl;


Cmat d;
d=a+b;
std::cout << d.get_shape().first << d.get_shape().second << std::endl;
std::cout << d.get_val(0,0) << "|" << d.get_val(0,1) << std::endl;
std::cout << d.get_val(1,0) << "|" << d.get_val(1,1) << std::endl;

}