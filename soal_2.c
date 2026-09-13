#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a, b, c, tot=0;
    scanf("%lld %lld %lld", &a, &b, &c);
    while(a!=b && a!=c && b!=c){
        if(a>b && a>c){
            if(b>c){
                a=a-1;
                c=c+1;
                tot++;
            } else {
                a=a-1;
                b=b+1;
                tot++;
            }
        } else if(b>a && b>c) {
            if(a>c){
                b=b-1;
                c=c+1;
                tot++;
            } else {
                b=b-1;
                a=a+1;
                tot++;
            }
        } else if(c>a && c>b){
            if(a>b){
                c=c-1;
                b=b+1;
                tot++;
            } else {
                c=c-1;
                a=a+1;
                tot++;
            }
        }
    } 
    printf("%lld", tot);
    
    return 0;
}
