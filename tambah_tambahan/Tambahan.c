/*
Determine if one of them is the sum of the other two.

Input:
7 (l0op)
1 4 3
2 5 8
9 11 20
0 0 0
20 20 20
4 12 3
15 7 8

Output:
YES
NO
YES
YES
NO
NO
YES
*/

#include <stdio.h>

int main(){
    int t, A, B, C;

    scanf("%d" ,&t);
    while (t--)
    {
        scanf("%d %d %d" ,&A, &B, &C);
            if (A == B + C || B == A + C || C == A + B){
                printf ("YES\n");
                }
             else{
                printf("NO\n");
                }
    } 
return 0;
}