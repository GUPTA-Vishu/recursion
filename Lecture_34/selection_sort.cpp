
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    // base case
    if (size == 1)
    {
        return;
    }

    // find the index of the minimum value
    int minValue= 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minValue])
        {
            minValue = i;
        }
    }

    // swap arr[0] with the minimum value at arr[minValue]
    swap(arr[0], arr[minValue]);

    // recursive relation
    selectionSort(arr + 1, size - 1);
}

int main()
{
    int arr[5] = {23, 45, 12, 10, 67};
    int n = 5;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// // samallest element ko laake right jagah par place krna hai.

// void selectionSort(int arr[], int n)

// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         int minValue = i;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minValue])
//             {
//                 minValue = j;

//             }
//         }
//         swap(arr[i], arr[minValue]);
//     }
// }

//     int main()
//     {

//         int arr[5]={89,45,23,40,12};
//         int n=5;
//         selectionSort(arr, n);
//         for(int i = 0; i < n; i++){
//             cout << arr[i] <<" ";

//         }
//         return 0;
//     }