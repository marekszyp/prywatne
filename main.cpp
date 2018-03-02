#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	void set(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
};
float distance(Point a, Point b)
{
    float odleglosc;
    Point c = Point();
    c.getX() = b.getX()-a.getX();
    c.getY() = b.getY()-a.getY();
    odleglosc = sqrt(pow(c.getX(), 2)+pow(c.getY(), 2));
    return odleglosc;
}
int main(int argc, char *argv[])
{
	Point a = Point();
	a.set(6.2, 5.4);
	Point b = Point();
	b.set(3.1, 1.8);
	float odleglosc = distance(a.set, b.set);
	cout << "Odleglosc miedzy punktami: "<<odleglosc<<endl;

    return 0;
}
