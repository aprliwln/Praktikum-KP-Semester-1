#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[] = "thequickbrownfoxjumpsoverthelazydog";
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i] == 'z')
        {
        string[i] = 'a' - 'z' + 'Z' - 1;
        }
        string[i] = string[i] + 1;
        string[i] = toupper(string[i]);
    }
    
    printf("%s" ,string);
    return 0;
}