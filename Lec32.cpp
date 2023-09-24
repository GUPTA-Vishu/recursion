#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
   
   //base cases
    if(nStairs<0)
    {
        return 0;

    }

    if(nStairs==0)
    {
        return 1;

    }

    // 
     int ans= countDistinctWays(nStairs-2)+countDistinctWays(nStairs-1);
     return ans;
     



}