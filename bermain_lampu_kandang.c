#include <stdio.h>

int main(){
    int lampu[101];

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = 0;
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1 ; p <= 10; p++) {
        // untuk setiap lampu nomor i,
        for (int i = 1; i <=100; i++ ) {
            // jika i merupakan kelipatan p,
            if (i % p == 0) {
                // tekan saklarnya.
                lampu[i] = !lampu[i];
            }
        }
    }

    // Hitung banyaknya lampu yang menyala,
    int totalnyala = 0;
    for (int i = 1; i <= 100; i++){
        if (lampu[i] == 1)
        {
            totalnyala++;
        }
        
    }

    printf("%d" ,totalnyala);
}