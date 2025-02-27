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
