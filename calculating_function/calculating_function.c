/*
f(n) =  - 1 + 2 - 3 + .. + ( - 1)n^n

I = 4 ; O = 2
I = 5 ; O = -3
*/

#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld" ,&n);

    if (n % 2 == 0)
    {
        printf("%lld\n" ,n/2);
    }
    else{
        printf("%lld\n" ,(n + 1)/(-2));
    }
    return 0;
}