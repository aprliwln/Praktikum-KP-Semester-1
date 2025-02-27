#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    int reversed = 0;
    int y = x;
    while(y != 0){
        int temp = y % 10;
        reversed = (reversed * 10) + temp;
        y = y / 10;
    }
    return (reversed == x);
}

int main(){
    int y;
    scanf("%d" ,&y);
    isPalindrome(y);
    return 0;
}*/
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