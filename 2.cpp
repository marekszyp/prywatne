#include <iostream>

using namespace std;

class Punkt2D
{
private:
    int x, y;
public:
    Punkt2D(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

};
class Punkt3D : public Punkt2D
{
private:
    int z;
public:
    Punkt3D(int x, int y, int z) : Punkt2D(x, y)
    {
        this->z = z;
    }
    int getZ()
    {
        return z;
    }

};

int main(int argc, char *argv[])
{

    Punkt2D p2d(1,2);
    cout<<p2d.getX()<<" "<<p2d.getY()<<endl;
    Punkt3D p3d(1,2, 4);
    cout<<p3d.getX()<<" "<<p3d.getY()<<" "<<p3d.getZ()<<endl;


    return 0;
}
