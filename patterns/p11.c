#include<stdio.h>
#include<stdbool.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    bool x;
    for(int i=0; i<n; i++) {
        if(i%2==0) { x = true; } else { x = false; };
        for(int j=0; j<=i; j++) {  
            printf("%d ", x);
            x = !x;
        }
        printf("\n");
    }
}