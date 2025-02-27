#include <stdio.h>

int main(){
    int b, p, l;
    scanf("%d %d %d" ,&b ,&p ,&l);

    if (b <= 10 && p <= 40 && l <= 90)
    {
        printf("S");
    }
    else if (b <= 14 && p <= 60 && l <= 120)
    {
        printf("M");
    }
    else if (b <= 18 && p <= 80 && l <= 180)
    {
        printf("L");
    }
    else{
        printf("X");
    } 
    return 0;
}