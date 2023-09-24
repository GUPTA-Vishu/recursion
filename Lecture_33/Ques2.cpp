#include <iostream>
using namespace std;

int getSum(int arr[], int size, int index)
{
   if(size==0){
    return 0;

   }
   return arr[index]+getSum(arr, size-1, index+1);
}

int main()
{
    int index=0;
    int arr[5] = {0, 1, 2, 3, 4};
    int size = 5;
    int ans = getSum(arr, size, index);
    cout<<"the sum of all elementsin the array"<<  ans  <<endl;

    return 0;
}