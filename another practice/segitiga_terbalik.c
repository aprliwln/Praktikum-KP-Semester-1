#include <stdio.h>

int main () {
    int x;
    printf("Input x = ");
    scanf("%d" ,&x);

    for (int i = x; i >= 1 ; i--)
    {
        for (int j = 1; j <= x-2; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
    x++;
    printf("\n");
    }
return 0;    
}