#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
        return false; //
    if (arr[0] == key)
    {
        return true; //
    }
    else
    {
        bool remainingpart = linearSearch(arr + 1, size - 1, key);
        return remainingpart; //
    }
}
int main()
{

    int arr[5] = {2, 4, 6, 7, 9};
    int size = 5;
    int key = 10;

    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "present " << endl;
    }

    else
    {
        cout << "absent" << endl;
    }

    return 0;
}