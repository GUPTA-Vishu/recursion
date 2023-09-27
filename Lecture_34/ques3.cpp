#include <iostream>
using namespace std;
int calculatePower(int a, int b)
{
    // base case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = calculatePower(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }

    if (b % 2 == 1)
    {
        return ans * ans * ans;
    }
}
int main()
{

    int a = 3;
    int b = 4;
    int value = calculatePower(a, b);
    cout << value << endl;

    return 0;
}