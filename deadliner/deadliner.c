#include <stdio.h>

int main(){
    int n;
    scanf("%d" ,&n);

    printf("%d\n" ,n / 3600);
    n = n % 3600;
    printf("%d\n" ,n / 60);
    n = n % 60;
    printf("%d\n" ,n);
    
    return 0;
}
