#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char name[]);

int main(){
    char name[100];
    scanf("%s" ,name);
    isPalindrome(name);
    return 0;
}

bool isPalindrome(char name[]){
    int length = strlen(name);
    for (int i = 0; i < length ; i++)
    {
        for (int j = length - 1; j >= 0; j--)
        {
            if(name[i] == name[j]){
                printf("True\n");
                return 1;
            }
            else
            {
                printf("False\n");
                return 0;
            }
            
        }
        
    }
}
