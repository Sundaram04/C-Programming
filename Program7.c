#include<stdio.h>
// Program to gives grades to a Student according to their marks 

int main() {
    // Marks -> m
    int m ;
    printf("Enter the of student(0-100) :");
    scanf("%d",&m);

    if (m >= 90 && m < 100) {
        printf("Grades of student is A+");
    }

    else if (m >= 70 && m < 90) {
        printf("Grades of student is A");
    }
    
    else if (m >= 30 && m < 70) {
        printf("Grades of student is B");
    }

    else if (m < 30) {
        printf("Grades of student is C");
    } 

    else {
        printf("Invalid input");
    }

    return 0 ;
}