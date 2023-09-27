#include <iostream>
using namespace std;

bool Palindrome(string str, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    //
    Palindrome(str, i + 1, j - 1);
}

int main()
{

    string str = "abba";
    bool ans = Palindrome(str, 0, str.length() - 1);
  if(ans){
    cout<<1<<endl;
  }
  else
  {
    cout<<3<<endl;
  }
    return 0;
}