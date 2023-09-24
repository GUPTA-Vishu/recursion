#include<iostream>
using namespace std;

void reverse (string str,int i, int j){
    //base case
    if(i>j){
        return ;

    }
    swap(str[i],str[j]);
    // R.R
    reverse(str,i+1,j-1);

}
int main()
{

    string str ="babbar";
    reverse(str,0,str.length()-1);
    cout << str << endl;

return 0;
}