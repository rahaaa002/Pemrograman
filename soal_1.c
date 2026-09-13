#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long i, x, n;
    long long j=0;
    scanf("%lld", &n);
    
    for(i=0; i<n; i++){
       scanf("%lld", &x); 
       j=j+x;
    }  
    
    printf("%lld\n", llabs(j));
     
    return 0;
}
