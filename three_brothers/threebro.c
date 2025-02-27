/*
the oldest brother is number 1
the middle brother is number 2
the youngest brother is number 3.
Given the numbers of the two brothers who arrived on time
you need to determine the number of the brother who was late.

Input: 3 1
Output: 2 (late)
*/

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d" ,&a ,&b);

    if (a == 1 && b == 2 || a == 2 && b == 1)
    {
        printf("3");
    }
    else if (a == 2 && b == 3 || a == 3 && b == 2)
    {
        printf("1");
    }
    else if (a == 3 && b == 1 || a == 1 && b == 3)
    {
        printf("2");
    }
    return 0;
}