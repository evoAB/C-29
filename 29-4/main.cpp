#include <iostream>

using namespace std;
class Item
{
private:
    int x;
    int y;
public:
    void setData(int a, int b)
    {
        x=a;
        y=b;
    }
    void showProduct()
    {
        cout<<"X = "<<x<<" Y = "<<y<<endl;
    }

};
class Product
{
private:
    int a;
    int b;
public:
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showProduct()
    {
        cout<<"A = "<<a<<" B = "<<b<<endl;
    }
    operator Item()
    {
        Item temp;
        temp.setData(a,b);
        return temp;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    i1.showProduct();
    return 0;
}
