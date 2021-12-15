#include <vector>
#include <utility>

class Cmat
{
private:
    std::pair<int,int> _taille={0,0};
    std::vector<std::vector<float>> _matrice;

public:
    Cmat(/* args */);
    ~Cmat();
public:

    void identity(const float &k,const int &taille);
    void pleine_time_k(const float &k,std::pair<int,int> &taille);
    void init(const std::vector<std::vector<float>> &voulu);
    std::pair<int,int> get_shape();
    Cmat operator+(Cmat &mat);
    Cmat operator*(Cmat &mat);

    float get_val(const int &i,const int &j);


};

