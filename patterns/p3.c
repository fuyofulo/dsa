#include<stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int x=1;
        for(int j=0; j<=i; j++) {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
}