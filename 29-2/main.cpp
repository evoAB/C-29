#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r, int i)
    {
        real=r;
        imag=i;
    }
    Complex (int a)
    {
        real=a;
        imag=a;
    }
    void setData(int a, int b)
    {
        real=a;
        imag=b;
    }
    void showData()
    {
        cout<<"real = "<<real<<" imag = "<<imag<<endl;
    }
    operator int()
    {
        return real*imag;
    }

};
int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=c1;
    cout<<x<<endl;
    return 0;
}
