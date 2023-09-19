#include<stdio.h>
// Program to check wheather a student is passed or failed 

int main() {
    int marks ;
    printf("Enter the marks of student(0-100) :");
    scanf("%d",&marks);

    if (marks > 30 && marks <= 100) {
        printf("PASS");
    }
    else if(marks >=0 && marks <= 30) {
        printf("FAIL");
    }
    else {
        printf("WRONG MARKS");
    }


    return 0;
}