#include<stdio.h>
// Perimeter of rectangele

int main() {
    // a --> length
    // b --> breadth

    int a , b , p ;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    p = 2*(a + b);

    printf("Perimeter of a rectangle is : %d",p);

    return 0;
    

}