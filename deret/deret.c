/*
Input: 5
output: 1+2+3+4+5
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d" ,&n);

    for (int i = 1; i < n + 1; i++)
    {
        printf("%d" ,i);
        if (i < n)
        {
            printf("+");
        }
    }
    return 0;
}