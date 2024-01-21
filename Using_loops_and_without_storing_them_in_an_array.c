#include<stdio.h>

void printTable(int num, int range){
    int mul;

    for(int i = 1; i <= range; i++){
        mul = num * i;
        printf("%d * %d = %d", num, i, mul);
        printf("\n");
    }
}

int main(){
    int x, y;

    printf("Enter the number:");
    scanf("%d", &x);

    printf("Enter the range:");
    scanf("%d", &y);

    printTable(x, y);

    return 0;
}