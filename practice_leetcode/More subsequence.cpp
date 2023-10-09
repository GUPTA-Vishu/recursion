#include <string>
#include <set>


string moreSubsequence(int n, int m, string a, string b)
{
    set<char>ans1;
    set<char>ans2;
    for(int i=0;i<n;i++){
        ans1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        ans2.insert(b[i]);
        
    }

    if(ans1.size()==ans2.size()){
        if(n>=m){
            return a ;
            
        }
        else {
            return b;
            
        }
    }
    else if(ans1.size()>ans2.size()){
        return a;
        
    }
    else{
        return b;
        
    }
    
}

