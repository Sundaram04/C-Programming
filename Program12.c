#include<stdio.h>
// Sum of first n natural number 

int main() {
    int n ;
    printf("Enter the number:");
    scanf("%d",&n) ;
    int sum = 0;
    int i=0 ;
    do {
        sum += i;
        i+=1;
        }while(i<=n);
    printf("%d",sum);
    
    return 0 ; 
}