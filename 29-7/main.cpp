#include <iostream>

using namespace std;

class Time
{
private:
    int hr;
    int min;
public:
    Time(int hr, int min)
    {
        this->hr=hr;
        this->min=min;
    }
    int gethr()
    {
        return hr;
    }
    int getmin()
    {
        return min;
    }
    void display()
    {
        cout<<"Hour : "<<hr<<" Minute : "<<min<<endl;
    }
};

class Minute
{
private:
    int min;
public:
    Minute()
    {
        min=0;
    }
    Minute(Time t)
    {
        min=t.gethr()*60+t.getmin();
    }
    void display()
    {
        cout<<"Minute : "<<min<<endl;
    }

};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;     // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}
