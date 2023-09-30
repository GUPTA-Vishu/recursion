// #include<iostream>
// using namespace std;

// void insertionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j],arr[j-1]);
//             j--;

//         }
//     }
// }
// int main()
// {

//     int arr[5]={12,1,34,23,24};
//     int n=5;
//     insertionSort(arr,n);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << endl;
//     }

// return 0;
// }

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    // base case
    if (n == 1)
    {
        return;
    }

    // r.r
    int j = arr[0];
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }

    insertionSort(arr + 1, n - 1);
}
int main()
{

    int arr[5] = {12, 1, 34, 23, 24};
    int n = 5;
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}