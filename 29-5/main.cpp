#include <iostream>

using namespace std;

class Invent1
{
private:
    int x,y;
public:
    Invent1()
    {
        x=0;
        y=0;
    }
    Invent1(int a, int b)
    {
        x=a;
        y=b;
    }
    operator float()
    {
        return x+y;
    }
    int getx(){return x;}
    int gety(){return y;}
};
class Invent2
{
private:
    int a,b;
public:
    Invent2()
    {
        a=0;
        b=0;
    }
    Invent2(int x, int y)
    {
        a=x;
        b=y;
    }
    Invent2(Invent1 i)
    {
        a=i.getx();
        b=i.gety();
    }

};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    return 0;
}
