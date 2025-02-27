/*
- Sebuah password dinyatakan kuat jika terdiri dari 8
  karakter atau lebih, mengandung karakter abjad huruf
  besar, huruf kecil, angka, dan karakter khusus

- Password yang tak memenuhi kriteria tersebut, 
  digolongkan agak kuat jika mengandung lebih dari 12
  karakter abjad.

-Jika bukan kuat atau agak kuat, maka password 
 tergolong lemah.

Input: 123450000000001
Output: Lemah

Input: Jelek_1222
Output: Kuat

Input: wkwkwkwkwkwkw
Output: AgakKuat
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char pw[20];
    scanf("%s" ,pw);

    int upper = 0, lower = 0, number = 0, special = 0, letter = 0;

    for(int i = 0; pw[i] != '\0'; i++){
        if(isupper(pw[i]))
        {
            upper = 1;
        }
        else if (islower(pw[i]))
        {
            lower = 1;
        }
        else if(isdigit(pw[i]))
        {
            number = 1;
        }
        else if (ispunct(pw[i]))
        {
            special = 1;
        }
        if (isalpha(pw[i]))
        {
            letter++;
        } 
    }
    
    if(strlen(pw) >= 8 && upper && lower && number && special){
        printf("Kuat\n");
    }
    else if (letter > 12)
    {
        printf("AgakKuat\n");
    }
    else{
        printf("Lemah\n");
    }
    return 0;
}