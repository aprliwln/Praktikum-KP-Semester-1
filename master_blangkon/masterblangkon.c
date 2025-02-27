#include <stdio.h>

int main (){
    int A, B, C, K, temp;
    scanf("%d %d %d %d" ,&A ,&B ,&C, &K);
    
    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    if (B > C)
    {
        temp = B;
        B = C;
        C = temp;
    }
    
    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }
    
    if (K == 0)
    {
        printf("%d %d %d\n" ,C,B,A);
    }
    
    if (K == 1)
    {
        printf("%d %d %d\n" ,A,B,C);
    }
    return 0;
}