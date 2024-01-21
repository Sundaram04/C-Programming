#include<stdio.h>

void print_table(int num, int range);

int main() {
    int x, y;

    printf("Enter a number:");
    scanf("%d", &x);

    printf("Enter range:");
    scanf("%d", &y);

    print_table(x, y);

    return 0;

}

void print_table(int num, int range){

    int row, col;
    row = range;
    col = 3;

    int arr[row][col];

    for(int k = 0; k < row; k++){
        arr[k][0] = num;
        arr[k][1] = k+1;
        arr[k][2] = arr[k][0] * arr[k][1];
    }

    for(int i = 0; i < row; i++){
        printf("%d * %d = %d", arr[i][0], arr[i][1], arr[i][2]);
        printf("\n");
    }
}