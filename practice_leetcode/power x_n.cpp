class Solution {
public:
    double myPow(double x, int n) {
      if(n==0){
        return 1;

      }

      //initialize the int n to long long ln
    long long ln=n;
     if(ln%2==0){
       
       double temp;
       if(ln<0){
         x=1/x;
         ln=-ln;
         temp=myPow(x,ln/2);
         return temp*temp;

       }
       else{
         temp=myPow(x,ln/2);
         return temp*temp;

       }

     }
     else{
       

       if(ln<0){
         x=1/x;
         ln =-ln;

         return  x*myPow(x,ln-1);

       }
       else{
         return x*myPow(x,ln-1);

       }
     }

        
    }
};