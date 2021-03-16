#include <math.h> 
#include <stdio.h> 
#include<stdlib.h>
#include <time.h> 
  

int factorial(int n) 
{ 
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
} 
  
int main() 
{ 
    struct timespec begin, end; 
    clock_gettime(CLOCK_REALTIME, &begin);
for(int i=1;i<=100;i++){
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
} //Time measured: 0.000030600 seconds.