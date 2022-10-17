#include <iostream>

using namespace std;

class Rupee
{
private:
    int rup;
public:
    Rupee(){}
    Rupee(int r)
    {
        rup=r;
    }
    int getRup()
    {
        return rup;
    }
    void display()
    {
        cout<<"Rupee = "<<rup<<endl;
    }

};

class Dollar
{
private:
    int doll;
public:
    Dollar(){}
    Dollar(int d)
    {
        doll=d;
    }

    Dollar(Rupee r)
    {
        doll=r.getRup()/100;
    }
    void display()
    {
        cout<<"Dollar = "<<doll<<endl;
    }
    operator Rupee()
    {
        return doll*100;
    }
};
int main()
{
    Rupee r = 230;
    Dollar d = r;   // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d;        // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
