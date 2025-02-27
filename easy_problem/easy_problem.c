#include <stdio.h>

int main(){
    int n;
    scanf("%d" ,&n);
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&arr[i]);
        if (arr[i] == 1)
        {
            count++;
        }
    }
    
    if (count >= 1)
        {
            printf("HARD\n");
        }
        else{
            printf("EASY\n");
        } 
    return 0;
}