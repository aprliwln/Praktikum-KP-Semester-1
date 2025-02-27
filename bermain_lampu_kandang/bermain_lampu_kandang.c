#include <stdio.h>

int main(){
    int lampu[101];
    
    for (int i = 1; i <= 100; i++) {
        lampu[i] = 0;
    }

    for (int p = 1 ; p <= 10; p++) {
        for (int i = 1; i <=100; i++ ) {
            if (i % p == 0) {
                lampu[i] = !lampu[i];
            }
        }
    }

    int totalnyala = 0;
    for (int i = 1; i <= 100; i++){
        if (lampu[i] == 1)
        {
            totalnyala++;
        }
        
    }

    printf("%d" ,totalnyala);
    return 0;
}
