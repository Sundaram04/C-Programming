# include<stdio.h>
// Area of Circle
int main() {
    float radius, pi, area ;
    printf("Enter the radius of circle :");
    scanf("%f",&radius);

    pi = 3.14;
    area = pi*radius*radius;
    printf("Area of circle is :%f",area);
    
    return 0;
}