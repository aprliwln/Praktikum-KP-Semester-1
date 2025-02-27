#include <stdio.h>
#include <math.h>

 int main() {
   int x1,x2,y1,y2;
   float s;
   char n1[10],n2[10];

   printf("...JARAK DUA TITIK KOORDINAT...\n");
   printf("===============================\n");

   printf("\nPemilik rumah ke-1 = ");
   scanf("%s" ,n1);
   
   printf("Titik Koordinat\n");
   printf("Input x1 = ");
   scanf("%d" ,&x1);
   printf("Input y1 = ");
   scanf("%d" ,&y1);

   printf("\nPemilik rumah ke-2 = ");
   scanf("%s" ,n2);

   printf("Titik Koordinat");
   printf("\nInput x2 = ");
   scanf("%d" ,&x2);
   printf("Input y2 = ");
   scanf("%d" ,&y2);

   s = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

   printf("\nJarak rumah %s ke rumah %s = %.2f" , n1,n2,s);

 return 0;

}
//sqrt untuk akar
//pow untuk pangkat (belakang koma merupakan angka pangkat)