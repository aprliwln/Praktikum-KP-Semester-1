#include <stdio.h>

int main(){
    int limax;
    int bob;
    int year = 1;

    scanf("%d %d" ,&limax, &bob);
    while (limax <= bob)
    {
        limax = limax*3;
        bob = bob*2;
        year++;
    }
    printf("%d" ,year-1);

}