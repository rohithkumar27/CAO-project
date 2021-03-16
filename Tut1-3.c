#include <math.h> 
#include <stdio.h> 
#include<stdlib.h>
#include <time.h> 
//using loop and memoisation
int ans[1000] = {0};
int factorial(int n) {
   if (n >= 0) {
      ans[0] = 1;
      for (int i = 1; i <= n; ++i) {
         ans[i] = i * ans[i - 1];
      }
      return ans[n];
   }
}
int main() {
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
           
   return 0;
}
//Time measured: 0.000014100 seconds.