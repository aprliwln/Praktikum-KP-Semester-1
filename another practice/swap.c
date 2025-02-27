#include <stdio.h>

void tukar(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int p =10;
int q = 20;
int r = 30;

int main(){
    printf("p = %d, q = %d, r = %d\n" ,p,q,r);
    
    tukar(&p, &q);
    printf("p = %d, q = %d, r = %d\n" ,p,q,r);
    
    tukar(&q, &r);
    printf("p = %d, q = %d, r = %d\n" ,p,q,r);
    return 0;
}