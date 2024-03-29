#pragma once
#include <vector>
#include <map>

//On définit une structure ici !
struct snake_segment_st
{
    int size = 0;
    int x = 0;
    int y = 0;
};


// Fonctions du snake
std::pair<int,int> snake_init(std::vector<std::pair<int,int>> &snake, const int &snake_size);
void push_front(std::vector<std::pair<int,int>> &snake,const std::pair<int,int> &valeur);
void snake_growth(std::vector<std::pair<int,int>> &snake, const std::pair<int,int> &ancient_queue);
std::pair<int,int> pop_front(std::vector<std::pair<int,int>> &snake);
bool snake_eat_himself(const std::vector<std::pair<int,int>> &snake);
bool snake_touch_borders(const std::vector<std::pair<int,int>> &snake,std::map<std::pair<int,int>,bool> &borders_map);