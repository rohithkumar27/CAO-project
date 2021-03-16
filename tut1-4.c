#include <math.h> 
#include <stdio.h> 
#include<stdlib.h>
#include <time.h> 
  //using recursion and memoisation
int result[1000]={};
int factorial(int n){

    if(n<=1){
        result[1]=1;
        return 1;
    }
    else if (result[n]!=0) 
        return result[n];
    else{
         int ans=n*factorial(n-1);
         result[n]=ans;
         return ans;
        
        
            
        }
    }
int main(){
    struct timespec begin, end; 
    clock_gettime(CLOCK_REALTIME, &begin);
    for(int i=100;i>0;i--){
        factorial(i);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    
    printf("Time measured: %.9f seconds.\n", elapsed);
           
    
   // printf("%d\n",factorial(3));
}
//Time measured: 0.000010300 seconds.