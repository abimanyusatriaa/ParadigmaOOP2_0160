
#include <iostream>
using namespace std;

//class parent
//tambahan final sesudah nama class
//untuk mencegah adanya overiding

class baseClass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "haloo saya Function dari derived Class";
    }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}
