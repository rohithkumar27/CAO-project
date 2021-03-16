#include <stdio.h>
#include <math.h>  
#include<stdlib.h>
#include <sys/time.h> 
#include<time.h>

unsigned int factorial(unsigned int n){
    if(n==1){
        return 1;
    }
    else{
        int result=1;
        for(int i=2;i<n+1;i++)
        {
            result=result*i;
        }
        return result;
    }
}

int main() 
{ 
   struct timespec begin, end; 
    clock_gettime(CLOCK_REALTIME, &begin);
    for(int i=100;i>0;i--){
        factorial(i);
    }
    //factorial(100);
    clock_gettime(CLOCK_REALTIME, &end);
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    
    printf("Time measured: %.9f seconds.\n", elapsed);
           
    return 0; 
} //Time measured: 0.000009600 seconds.