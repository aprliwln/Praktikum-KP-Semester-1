#include <stdio.h>

int main(){
    int n;
    scanf("%d" ,&n);
    int angka[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&angka[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (angka[i] < 0)
        {
            printf("%d\n" ,angka[i]);
        }
    }
    for (int i = 0; i < n; i++){
        if (angka[i] == 0)
        {
            printf("%d\n" ,angka[i]);
        }
    }
    for (int i = 0; i < n; i++){
        if (angka[i] > 0)
        {
            printf("%d\n" ,angka[i]);
        }
    }
    return 0;
}
