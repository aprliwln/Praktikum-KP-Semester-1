/*
Baris pertama berisi nilai tinggi bebek yang paling rendah.
Baris kedua berisi nilai tinggi bebek yang paling tinggi.
Baris ketiga berisi nilai tinggi bebek yang menengah.
Input: 3 5 2
Output: 2 5 3
*/

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
}