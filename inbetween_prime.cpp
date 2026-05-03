 // Leetcode Number : 3918. Sum of Primes Between Number and Its Reverse

 // time complexity : o(n*sqrt(n))
 // space complexity : o(1)


 class Solution {
public:

      bool isprime(int num){
          for(int i=2; i<=sqrt(num); i++){
              if(num%i==0){
                  return false;
              }
          }
          return true;
      }
    
    int sumOfPrimesInRange(int n) {
        int temp=n;
        int rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n/=10;
        }
         int num2=max(rev,temp);
         int num1=min(rev,temp);
        int sum=0;
         for(int i=num1; i<=num2; i++){
             if(i==1) continue;
             if(i==2){
                 sum+=2;
                 continue;
             }
               if(isprime(i)){
                   sum+=i;
               }
         }
        return sum;
    }
};