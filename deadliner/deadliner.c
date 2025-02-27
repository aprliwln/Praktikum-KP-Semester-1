/*
menghitung berapa jam, menit, dan detik sisa waktu pengerjaan

Input: 245 (dalam detik)
Output:
0 (sisa jam)
4 (sisa menit)
5 (sisa detik)

Input: 3680
Output:
1
1
20
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d" ,&n);

    printf("%d\n" ,n / 3600);
    n = n % 3600;
    printf("%d\n" ,n / 60);
    n = n % 60;
    printf("%d\n" ,n);
    
    return 0;
}