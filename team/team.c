/*
Then n lines contain three integers each, 
each integer is either 0 or 1. 
If the first number in the line equals 1, 
then Petya is sure about the problem's solution, 
otherwise he isn't sure.

Input:
3 (loop)
1 1 0 (yg satu > 1) = setuju
1 1 1 (sm) = setuju
1 0 0 (kurang dri 1) = tdk setuju

Output: 2 (yg setju ada 2)
*/

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
}