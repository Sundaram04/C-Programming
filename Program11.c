#include<stdio.h>
// Program to print from 0 to n using while loop
int main() {
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i=0;
    while( i<=n ) {
        printf("%d \n",i);
        i += 1;
    }
    
    return 0 ; 
}



     
