#include <iostream>

using namespace std;

class Rupee
{
private:
    int rup;
public:
    Rupee()
    {
        rup=0;
    }
    Rupee(int r)
    {
        rup=r;
    }
    operator int()
    {
        return rup;
    }
};

int main()
{
    Rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
}
