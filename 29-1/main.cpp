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

    void showData()
    {
        cout<<"real = "<<real<<" imag = "<<imag<<endl;
    }

};
int main()
{
    Complex c1;
    int x=5;
    c1=x;
    c1.showData();
    return 0;
}
