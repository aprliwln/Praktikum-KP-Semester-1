#include <stdio.h>
#include <math.h>

int main() {
     int baris1, kolom1, baris2, kolom2;
    
    
    printf("=== PERKALIAN MATRIKS ===");
    
    //Masukkan ordo matriks
    printf("\nInput jumlah baris ke-1 = ");
    scanf("%d" ,&baris1);
    printf("Input jumlah kolom ke-1 = ");
    scanf("%d" ,&kolom1);
    int matriks1 [baris1][kolom1];

    printf("\nInput jumlah baris ke-2 = ");
    scanf("%d" ,&baris2);
    printf("Input jumlah kolom ke-2 = ");
    scanf("%d" ,&kolom2);
    int matriks2 [baris2][kolom2];
    
if (baris2 == kolom1){

    //Input elemen matriks
    printf("\nOrdo matriks ke-1 = %dx%d" ,baris1 ,kolom1);
    printf("\nInput elemen matriks ke-1 =");
    for (int i = 0; i < baris1; i++){
        for (int j = 0; j < kolom1; j++){
            scanf("%d" ,&matriks1[i][j]);
        }
        
    }
    
    printf("\nOrdo matriks ke-2 = %dx%d" ,baris2, kolom2);
    printf("\nMasukkan elemen matriks ke-2 =\n");
    for (int k = 0; k < baris2; k++){
        for (int l = 0; l < kolom2; l++){
            scanf("%d" ,&matriks2[k][l]);
        }
    }

    //Perhitungan matriks
    int hasil[baris1][kolom2];
    printf("\nHasil perkalian matriks:\n");
    for (int i=0; i<baris1; i++){
        for (int j=0; j<kolom2; j++){
            hasil[i][j] = 0;
            for (int k=0; k<baris2; k++){
                hasil[i][j] += (matriks1[i][k])*(matriks2[k][j]);
            }
        }
    }
    
    //Output
    for (int i=0; i < baris1; i++){
        for (int j=0; j<kolom2; j++){
            printf("%d \t" ,hasil[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("kolom ke-1 dan baris ke-2 input jumlahnya harus sama!");
    return 1;
    }
return 0;
}
