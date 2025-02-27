#include <stdio.h>

int main(){
    int t;
    scanf("%d" ,&t);

    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d" ,&a);
        int arr[a];
        
        for (int j = 0; j < a; j++)
        {
            scanf("%d" ,&arr[j]);
        }
        
        int hasil = 0;
        for(int j = 0; j < a; j++){
            if (j % 2 != 0)
        {
            arr[j] = arr[j] * (-1);
        }
        hasil = hasil + arr[j];
        }
        printf("%d\n" ,hasil);
    }
    return 0;
}