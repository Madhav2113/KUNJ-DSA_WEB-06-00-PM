#include <iostream>
using namespace std;

class superhero
{
public:
    void fly()
    {
        cout << "I can fly" << endl;
    }
};

class ironman : public superhero
{
public:
    void laser()
    {
        cout << "I can shoot laser" << endl;
    }
};

int main()
{
    ironman obj;

    obj.fly();
    obj.laser();
}