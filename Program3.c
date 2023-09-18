#include<stdio.h>
// To print average of three numbers 

int main() {
    int x , y , z ;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    printf("Enter z :");
    scanf("%d",&z);

    int avg = (x + y + z) / 3 ;
    printf("Average of three number are :%d",avg);

    return 0;


}