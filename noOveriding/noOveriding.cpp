
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

int main()
{
    std::cout << "Hello World!\n";
}
