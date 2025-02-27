#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d\n%d\n%d" ,&a ,&b, &c);

    if(a > b){
        d = a;
        a = b;
        b = d;
    }
    if(b > c){
        d = b;
        b = c;
        c = d;
    }
    if (a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    printf("%d\n%d\n%d" ,a ,c ,b);
    return 0;
}
