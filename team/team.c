#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d" ,&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        scanf("%d %d %d" ,&x ,&y ,&z);
        if (x + y + z > 1)
        {
            count++;
        } 
    }
    printf("%d\n" ,count);
    return 0;
}
