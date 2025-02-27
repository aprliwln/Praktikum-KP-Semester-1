#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];
    scanf("%s" ,s);
    
    if (!isupper(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    printf("%s" ,s);
    return 0;
}