#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d" ,&n);
    char arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s" ,arr);
        int length = strlen(arr);
        if (strlen(arr) <= 10)
        {
            printf("%s\n" ,arr);
        }
        if(strlen(arr) >= 10){
            printf("%c%d%c\n" ,arr[0] ,length-2, arr[length-1]);
        }
    }
    return 0;
}
