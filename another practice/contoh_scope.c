#include <stdio.h>

struct fruit {
    char name[50];
    int calories;
    int price;
};
void print_fruit(const struct fruit *frt){
    printf("Fruit name : %s\n" ,frt->name);
    printf("Calories total : %d\n" ,frt->calories);
    printf("Price : Rp%d/kg\n" ,frt->price);
}
int main() {
    struct fruit fruit_list[5] = {
        {"Banana", 100, 17000},
        {"Papaya", 150, 10000},
        {"Grape", 75, 20000},
        {"Orange", 50, 15000},
        {"Apple", 125, 25000},
    };
    char yes;
    int choice;
    printf("=== Choose Your Fruit ===\n");
    printf("1. Banana\n2. Papaya\n3. Grape\n4. Orange\n5. Apple");
    
do{
    printf("\nRincian stok buah: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            print_fruit(&fruit_list[0]);
            break;
        case 2:
            print_fruit(&fruit_list[1]);
            break;
        case 3:
            print_fruit(&fruit_list[2]);
            break;
        case 4:
            print_fruit(&fruit_list[3]);
            break;
        case 5:
            print_fruit(&fruit_list[4]);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    printf("Lagi ? <y/n> :");
    scanf("%s" ,&yes);
}
while(yes == 'y');
    return 0;
}