#include <stdio.h>

int main(){
    int jumlah;
    scanf("%d" ,&jumlah);
    int arr[jumlah];

    for (int i = 0; i < jumlah; i++)
    {
        scanf("%d" ,&arr[i]);
    }

    for (int i = jumlah - 1; i >= 0; i--)
    {
        printf("%d" ,arr[i]);
        if(i > 0){
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
