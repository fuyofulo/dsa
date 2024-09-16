#include<stdio.h>

int gcd (int a, int b) {
    int n = a%b;
    if(n == 0) {
        return b;
    }
    gcd(b, n);
}

int lcm(int a, int b) {
    int lcm = (a*b)/gcd(a, b);
    return lcm;
}

int main() {

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int f = gcd(a, b);
    printf("%d\n", f);
    printf("%d", lcm(a, b));

}

