#include <iostream>

using namespace std;

class Time
{
private:
    int hr;
    int min;
public:
    Time(int i)
    {
        hr=i/60;
        min=i%60;
    }
    void display()
    {
        cout<<"Hour : "<<hr<<" Minutes : "<<min<<endl;
    }

};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes : ";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}
