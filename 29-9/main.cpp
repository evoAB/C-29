#include <iostream>

using namespace std;

class Dollar
{
private:
    int dol;
public:
    Dollar(){}
    Dollar(int d)
    {
        dol=d;
    }
    void display()
    {
        cout<<"Dollar = "<<dol<<endl;
    }
};
int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}
