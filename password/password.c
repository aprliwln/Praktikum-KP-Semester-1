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
