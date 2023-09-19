#include<stdio.h>
// Program to Check for upper case and lower case 
int main() {
    char ch ;
    printf("Enter character :");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("UPPER CASE");
    }

    else if(ch >= 'a' && ch <= 'z') {
        printf("LOWER CASE");
    }

    else {
        printf("Not english letter ");
    }

return 0 ; 
}
