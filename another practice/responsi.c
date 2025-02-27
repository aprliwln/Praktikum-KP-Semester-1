#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//deklarasi fungsi agar dapat memanggil fungsi lainnya
void basic();
void statistika();
void kaidah_pencacahan();
int ulang(void (*jenis)());

//fungsi untuk memilih jenis kalkulator yang ingin digunakan
int kalkulator(){
    char pilihan;

    while(1){ //untuk melakukan pengulangan
        
        printf("=========================================\n");
        printf("|           Program Kalkulator          |\n");
        printf("=========================================\n");
        printf("|        Pilih Jenis Kalkulator         |\n");
        printf("=========================================\n");
        printf("|                                       |\n");
        printf("|               (A) Basic               |\n");
        printf("|             (B) Statistika            |\n");
        printf("|         (C) Kaidah Pencacahan         |\n");
        printf("|               (D) Exit                |\n");
        printf("|                                       |\n");
        printf("=========================================\n");
        
        printf("Masukkan pilihan : ");
        scanf(" %c" ,&pilihan);
        getchar();  //membersihkan karakter newline dari buffer

        system("cls");

        //Kode akan dieksekusi jika user meng-input dgn benar
        if(pilihan == 'A' || pilihan == 'a'){
            ulang(basic);
        }
        else if(pilihan == 'B' || pilihan == 'b'){
            ulang(statistika);
        }
        else if(pilihan == 'C' || pilihan == 'c'){
            ulang(kaidah_pencacahan);
        }
        else if(pilihan == 'D' || pilihan == 'd'){
            printf("=== Terima kasih telah dicoba:) ===\n");
            return 0; //pengulangan akan berhenti jika input D/d
        }
        else{
            printf("Tidak valid!\n");
        }
    }
}

//fungsi untuk melakukan pengulangan jika sudah menggunakan jenis kalkulator
int ulang(void (*jenis)()){
    char yes;
    
    do{
        //untuk clear screen waktu input y
        system("cls");
        
        //memanggil jenis fungsi : basic(), statistika(), kaidah_pencacahan()
        jenis();
        
        printf("Ingin mengulang? <y/n> : ");
        scanf(" %c" ,&yes);
    }
    while(yes == 'y' || yes == 'Y');
    
    //untuk clear screen waktu input n
    system("cls");
    
    return 0;
}

//fungsi jika memilih kalkulator basic
void basic(){
    int pilih;
    float angka1, angka2;
    
        printf("=========================================\n");
        printf("|           Kalkulator Basic            |\n");
        printf("=========================================\n");
        printf("|           Pilih Operasi               |\n");
        printf("=========================================\n");
        printf("|                                       |\n");
        printf("|   (1) Penjumlahan (2) Pengurangan     |\n");
        printf("|   (3) Pembagian   (4) Perkalian       |\n");
        printf("|   (5) Pangkat     (6) Akar            |\n");
        printf("|                                       |\n");
        printf("=========================================\n");
        
        printf("Masukkan pilihan (1-6) : ");
        scanf("%d" ,&pilih);
    
        //Kode akan dieksekusi jika user input dgn benar
        if(pilih >= 1 && pilih <= 6){
            
            printf("Masukkan angka ke-1 (dalam akar/pangkat = derajat): ");
            scanf("%f" ,&angka1);
            printf("Masukkan angka ke-2 (dalam akar/pangkat = nilainya): ");
            scanf("%f" ,&angka2);
    
            switch(pilih){
                case 1:
                    printf("Hasil Penjumlahan: %.2f\n" ,angka1 + angka2);
                    break;
                case 2:
                    printf("Hasil Pengurangan: %.2f\n" ,angka1 - angka2);
                    break;
                case 3:
                    printf("Hasil Pembagian: %.2f\n" ,angka1 / angka2);
                    break;
                case 4:
                    printf("Hasil Perkalian: %.2f\n" ,angka1 * angka2);
                    break;
                case 5:
                    printf("Hasil Pangkat: %.2f\n" ,pow(angka2, angka1));
                    break;
                case 6:
                    printf("Hasil Akar: %.2f\n" ,pow(angka2, 1.0/angka1));
                    break;
                default:
                    break;
            }
        }
        else{
            printf("Masukkan angka yang valid!\n");
        }
}

//mencari modus sebuah data
int modus(int data[], int size){
    int nilai_max = data[0], hitung_max = 0;

    //memeriksa tiap elemen data
    for (int i = 0; i < size; i++){
        int hitung = 0;
        
        //menghitung elemen yang lebih banyak
        for (int j = 0; j < size; j++){
            if (data[j] == data[i])
                hitung++;
        }
        //hitung max dan nilai max diperbarui jika ada elemen yang lebih banyak
        if (hitung > hitung_max){
            hitung_max = hitung;
            nilai_max = data[i];
        }
    }
    return nilai_max;
}

//fungsi untuk qsort yang membandingkan selisih dua elemen
int perbandingan(const void* a, const void* b){
    
    //misal a-b hasilnya (-), maka a = bil terkecil dan diurutkan sblm b
    //misal a-b hasilnya (+), maka b = bil terkecil dan diurutkan sblm a
    return(*(int*)a - *(int*)b);
}

//fungsi untuk mencari median dalam data
float median(int data[], int size){

    //untuk mengurutkan elemen
    //urutannya mulai dari yang terkecil ke terbesar akibat dari fungsi perbandingan()
    qsort(data, size, sizeof(int), perbandingan);

    //jika jumlah data genap
    if(size % 2 == 0){
        return (data[(size / 2) - 1] + data[size / 2]) / 2.0;
    }
    //jika jumlah data ganjil
    else{
        return data[size / 2];
    }
}

//fungsi untuk mencari rata-rata data
float mean(int data[], int size){
    float hasil = 0;
    
    //untuk menjumlhkan tiap elemen data
    for(int i = 0; i < size; i++){
        hasil += data[i];
    }
    //menghitung rata2 setelah elemen dijumlahkan
    return hasil / size;
}

//fungsi jika memilih kalkulatoR Statistika
void statistika(){
    int pilih;

    printf("=========================================\n");
    printf("|           Kalkulator Statistika       |\n");
    printf("=========================================\n");
    printf("|               Pilih Operasi           |\n");
    printf("=========================================\n");
    printf("|                                       |\n");
    printf("|               (1) Modus               |\n");
    printf("|               (2) Median              |\n");
    printf("|               (3) Mean                |\n");
    printf("|                                       |\n");
    printf("=========================================\n");
    
    printf("Masukkan pilihan (1-3) : ");
    scanf("%d" ,&pilih);

    //Kode akan dieksekusi jika user input dgn benar
    if(pilih >= 1 && pilih <= 3){
        int size;
            
            //mengisi jumlah elemen data
            printf("Masukkan jumlah data: ");
            scanf("%d" ,&size);
            printf("Masukkan isi data: ");
            int isi_data[size];
            
            //mengisi data
            for(int i = 0; i < size; i++){
                scanf("%d" ,&isi_data[i]);
            }
            
        switch(pilih){
            case 1:
                printf("Modus : %d\n", modus(isi_data, size));
                break;
            case 2:
                printf("Median : %.2f\n" , median(isi_data, size));
                break;
            case 3:
                printf("Mean : %.2f\n" , mean(isi_data, size));
                break;
            default:
                break;
        }
    }
    else{
        printf("Masukkan angka yang valid!\n");
    }
}

//fungsi untuk mencari faktorial
long long int faktorial(int n){
    
    //0! dan 1! hasilnya 1
    if (n == 0 || n == 1){
        return 1;
    }
    //rekursi jika n lebih dari 1
    else {
        return (n * faktorial(n - 1));
    }
}

//fungsi untuk mencari permutasi
long long int permutasi(int n, int r){
    
    //tidak bisa dihitung
    if (n < r){
        return -1;
    }
    //menghitung permutasi
    else{
        return (faktorial(n) / faktorial(n - r));
    }
}

//fungsi untuk mencari kombinasi
long long int kombinasi(int n, int r){
    
    //tidak bisa dihitung
    if (n < r){
        return -1;
    }
    //menghitung kombinasi
    else{
        return (faktorial(n) / (faktorial(r) * faktorial(n - r)));
    }
}

//fungsi jika memilih kalkulator kaidah pencacahan
void kaidah_pencacahan(){
    int pilih;

    printf("=========================================\n");
    printf("|       Kalkulator Kaidah Pencacahan    |\n");
    printf("=========================================\n");
    printf("|               Pilih Operasi           |\n");
    printf("=========================================\n");
    printf("|                                       |\n");
    printf("|           (1) Faktorial   (n!)        |\n");
    printf("|           (2) Permutasi   (nPr)       |\n");
    printf("|           (3) Kombinasi   (nCr)       |\n");
    printf("|                                       |\n");
    printf("=========================================\n");
    
    printf("Masukkan pilihan (1-3) : ");
    scanf("%d" ,&pilih);

    //Kode akan dieksekusi jika user input dgn benar
    if(pilih >= 1 && pilih <= 3){
        int n, r;
            
            printf("n harus lebih besar dari r!\n");
            printf("Masukkan angka n : ");
            scanf("%d" ,&n);
            printf("Masukkan angka r (isi 0 untuk faktorial) : ");
            scanf("%d" ,&r);
    
        switch (pilih){
            case 1:
                printf("Hasil faktorial: %lld\n" ,faktorial(n));
                break;
            case 2:
                printf("Hasil permutasi: %lld\n" ,permutasi(n, r));
                break;
            case 3:
                printf("Hasil kombinasi: %lld\n" ,kombinasi(n, r));
            default:
                break;
        }
    }
    else{
        printf("Masukkan angka yang valid!\n");
    }
}

//untuk menjalankan fungsi
int main(){
    //memanggil fungsi agar dapat berjalan
    kalkulator();
    
    return 0;
}