#include <stdio.h>

int main(){
    char nama[20];
    char status;
    int pilih, harga, jumlah;

    printf("================== MENU ICE CREAM ==================\n");
    printf("    1. Strawberry Lucky Sundae     =       Rp18.000\n");
    printf("    2. Oreo Sundae                 =       Rp16.000\n");
    printf("    3. Mango Sundae                =       Rp18.000\n");
    printf("    4. Chocolate Cookies Sundae    =       Rp20.000\n");
    printf("    5. Boba Sundae                 =       Rp16.000\n");
    printf("    6. Vanila Ice Cream Cone       =       Rp10.000\n");
    printf("    7. Chocolate Ice Cream Cone    =       Rp11.000\n");
    printf("====================================================\n");

    printf("Nama Pembeli = ");
    scanf("%s" ,&nama);

do{
    printf("Piih Menu = ");
    scanf("%d" ,&pilih);
    
    printf("Jumlah = ");
    scanf("%d" ,&jumlah);

switch (pilih){
    case 1:
    harga = jumlah*18000;
    printf("Pilihan kamu : Strawberry Lucky Sundae\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;
    
    case 2:
    harga = jumlah*16000;
    printf("Pilihan kamu : Oreo Sundae\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;

    case 3:
    harga = jumlah*18000;
    printf("Pilihan kamu : Mango Sundae\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;

    case 4:
    harga = jumlah*20000;
    printf("Pilihan kamu : Chocolate Cookies Sundae\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;

    case 5:
    harga = jumlah*16000;
    printf("Pilihan kamu : Boba Sundae\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;

    case 6:
    harga = jumlah*10000;
    printf("Pilihan kamu : Vanila Ice Cream Cone\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;

    case 7:
    harga = jumlah*11000;
    printf("Pilihan kamu : Chocolate Ice Cream Cone\n");
    printf("Total harga = Rp%d\n" ,harga);
        break;
    }
printf("Apakah sudah semua? <y/n> = ");
scanf("%s" ,&status);
}
    while (status == 'n');
return 0;
}