#include <iostream>
using namespace std;
class Point
{
private:
    double x;
    double y;

public:
    Point(double X, double Y)
    {
        x = X;
        y = Y;

        cout << " Point constructor : x = " << x << " : y = " << y << endl;
    }

    // copy constructor

    Point(Point &p)

    {

        double X = p.GetX();

        double Y = p.GetY();

        this->x = X;

        this->y = Y;
    }

    ~Point()

    {

        cout << " Point destructor : x = " << x << " : y = " << y << endl;
    }

    double GetX() { return (x); }

    double GetY() { return (y); }

    void Show()

    {

        cout << "(" << x << "," << y << ")" << endl;
    }
};

class Rectangle

{

private:
    Point *topLeft;

    Point *bottomRight;

public:
    Rectangle(Point top_left, Point bottom_right)

    {

        topLeft = new Point(top_left);

        bottomRight = new Point(bottom_right);

        cout << "Rectangle constructor : top left at:";

        this->topLeft->Show();

        cout << "Rectangle constructor : bottom right at: ";

        this->bottomRight->Show();
    }

    // copy constructor

    Rectangle(Rectangle &r)

    {

        topLeft = new Point(*r.topLeft);

        bottomRight = new Point(*r.bottomRight);
    }

    ~Rectangle()

    {

        cout << "Rectangle destructor : top left at:";

        this->topLeft->Show();

        cout << "Rectangle destructor : bottom right at: ";

        this->bottomRight->Show();

        if (topLeft != NULL)
        {
            delete (topLeft);
        }

        if (bottomRight != NULL)
        {
            delete (bottomRight);
        }
    }
};

int main()

{

    Point topLeft(1, 3);

    Point bottomRight(7, 5);

    Rectangle r(topLeft, bottomRight);

    return 0;
}