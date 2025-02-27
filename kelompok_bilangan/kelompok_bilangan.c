/*
bilangan negatif terlebih dahulu
diikuti nol dan 
terakhir bilangan positif. 
Tetapi Pak Dengklek meminta bebek-bebeknya menuliskan 
kelompok tersebut sesuai urutan pada larik semula.

Input:
5 = loop
0
11
-8
0
10

Output:
-8
0
0
11
10
*/

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