#include <iostream>
using namespace std;

bool binanrysearch(int arr[], int low, int high, int key)
{
    // base case
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] > key)
    {
        binanrysearch(arr, mid + 1, high, key);
    }
    if (arr[mid] < key)
    {
        binanrysearch(arr, low, mid - 1, key);
    }
}

int main()
{
    int low = 0;
    int size = 10;

    int high = size - 1;
    int arr[10] = {2, 3, 6, 7, 8, 9, 10, 11, 12, 13};

    int key = 10;
    bool ans = binanrysearch(arr, low, high, key);
    if (ans == true)
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "not ok" << endl;
    }
    return 0;
}