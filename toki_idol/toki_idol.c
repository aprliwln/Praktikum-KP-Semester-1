#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d" ,&a ,&b ,&c);

    if (a+b+c >= 200 && a >= 50 && b >= 50 && c >= 50)
    {
        printf("Lolos\n");
    }
    else{
        printf("Tidak Lolos\n");
    }
    
    return 0;
}