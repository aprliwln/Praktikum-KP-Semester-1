#include <stdio.h>

int main(){
    int So, N, D;
    scanf("%d %d %d" ,&So ,&N ,&D);
    int arr[N];

    printf("%d\n" ,So);
    for (int i = 1; i < N; i++)
    {
        printf("%d\n" ,So + D);
        So = So + D;
    }
    return 0;
}