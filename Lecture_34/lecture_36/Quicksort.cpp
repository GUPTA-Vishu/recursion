#include <iostream>
using namespace std;

int parition(int arr[], int s, int e)

{   //take the first element of the array as pivot
    int pivot = arr[s];
//count the no of elements less than the pivot 

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
   // calaculate pivot index  swap the value of pivot Index with the pivot value
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //now check that all the elements on the left side is smaller than the pivot element and that all the elements on the right side greater than the pivot element
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] <= arr[pivotIndex])
        {
            i++;
        }
        if (arr[j] > arr[pivotIndex])
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // find the value of partition of the array
    int p = parition(arr, s, e);
//left side
    quicksort(arr, s, p - 1);
// right side
    quicksort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {10, 9, 34, 27, 24};
    int n = 5;
    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}