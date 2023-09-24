#include <iostream>
using namespace std;
// recurion is all about 
// base case dekh lo
// reccurence relation bana lo

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;
    else if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {

        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
    // R.R
}
int main()
{
    int arr[5] = {2, 5, 1, 9, 4};
    int size = 5;
    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }
    return 0;
}