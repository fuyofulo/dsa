#include<stdio.h>
int main() {
    int n; 
    printf("enter a number: ");
    scanf("%d", &n);
    char x = 'A';
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%c ", x);
        }
        printf("\n");
        x++;
    }
}