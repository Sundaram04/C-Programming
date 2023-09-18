#include<stdio.h>
// To check a number if it is divisible by 2 or not 
int main() {
    int x ;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("%d", x % 2 == 0);

    return 0;
}
