/*
Input : 
5
a
8
Output:
88888
8aaa8
8a*a8
8aaa8
88888

4 a 8
8888
8aa8
8aa8
8888
*/

#include <stdio.h>

int main(){
    int a, b;
    char c;
    scanf("%d %c %d" ,&a ,&c ,&b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
           if (i == 1 || i == a || j == 1 || j == a)
           {
            printf("%d" ,b);
           }
           else if(a % 2 == 1 && (i == (a/2) + 1 && j == (a/2) + 1)){
            printf("*");
           }
           else{
            printf("%c" ,c);
           }
        }
        printf("\n");
    }
    return 0;
}