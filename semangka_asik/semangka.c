/*
Print YES, if the boys can divide the watermelon into
two parts, each of them weighing even number of kilos
and NO in the opposite case.

Input: 8
Output: YES
*/

#include <stdio.h>

int main() {
    int x;

    scanf("%d" ,&x);
    if(x%2 == 0 && x > 2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}