#include <stdio.h>

int main(){
    int k, a;
    char c;
    scanf("%d %c %d" ,&k ,&c, &a);

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i == j || j == (k - i + 1))
            {
                printf("%d" ,a);
            }
            else{
                printf("%c" ,c);
            }
            
        }
        printf("\n");
    }
    
}
