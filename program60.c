#include<stdio.h>

int main() {//to print * in square format
    int i,j,n;
    printf("enter no of rows :");
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}