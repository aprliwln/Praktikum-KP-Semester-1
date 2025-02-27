#include <stdio.h>

int main(){
    int pisang, uang, jumlahp;
    int harga = 0;

    scanf("%d %d %d" ,&pisang,&uang,&jumlahp);
    
    for(int i=1; i <= jumlahp; i++){
        pisang = pisang*i;
        harga = harga + pisang;
        pisang = pisang/i;
    } 
    if (harga >= uang)
    {
        printf("%d" ,harga-uang);
    }
    else {
        printf("0");
    }  
    return 0;
}