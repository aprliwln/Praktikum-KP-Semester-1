#include <stdio.h>
#include <math.h>

int main(){
  int x;
  int y;

  scanf("%d %d" ,&x ,&y);

  for (int i = 0; i < y; i++)
  {
    if (x % 10 == 0)
    {
      x = x / 10;
    }
    else{
      x = x - 1;
    }
  }
  printf("%d\n" ,x);
  return 0;
}

/*Jika pakai while
int n, k;
sacnf
while (k > 0){
  if ( n%10 == 0){
    n = n/10;
  }
  else{
    n = n-1;
  }
  k = k- 1 atau k--;
}
*/