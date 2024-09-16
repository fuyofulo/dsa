#include<stdio.h>

int main() {
    int a [] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(a)/sizeof(int);
    for(int i=0, j=length-1; i<j; i++, j--) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    for(int i=0; i<length; i++) {
        printf("%d\t", a[i]);
    }
}