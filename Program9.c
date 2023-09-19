#include<stdio.h>
// Program to Check Natural number 
int main() {
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);

    if (n == 0) {
        printf("Not a NATURAL NUMBER");
    }

    else if(n > 0 ) {
        printf("NATURAL NUMBER");
    }

    else {
        printf("INVALID INPUT");
    }

return 0 ; 
}
