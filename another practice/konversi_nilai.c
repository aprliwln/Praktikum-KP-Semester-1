#include <stdio.h>

int main(){
    int nilai;
    int result;

    printf("=== KONVERSI NILAI ===");
    printf("\nInput nilai = ");
    result = scanf("%d" ,&nilai);

    if(result !=1){ //apabila data yang dimasukkan tidak bertipe float
        printf("Tidak valid");
        return -1;
    }

    if(nilai <=100 && nilai >= 85){
        printf("A");
        printf("\n");
    }
    else if(nilai <= 84 && nilai >= 80){
        printf("A-");
        printf("\n");
    }
    else if(nilai <= 79 && nilai >= 75){
        printf("B+");
        printf("\n");
    }
    else if(nilai <= 74 && nilai >= 70){
        printf("B");
        printf("\n");
    }
    else if (nilai <= 69 && nilai >= 65){
        printf("C+"); 
        printf("\n");
    }
    else if (nilai <= 64 && nilai >= 60){
        printf("C");
        printf("\n");
    }
    else if (nilai <= 59 && nilai >= 55){
        printf("D");
        printf("\n");
    }
    else if (nilai <= 55 && nilai >= 0){
        printf("E");
        printf("\n");
    }
    else{
        printf("Tidak Valid");
        printf("\n");
    }
    return 0;
}