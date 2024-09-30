#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = 1;

    for(int i=1; i<=n; i++) {
        
        for(int j=0; j<=i-1; j++) {
            cout << " ";
        }

        for(int j=0; j<=n-i; j++) {
            cout << num;
        }
        num++;
        cout << endl;
    }
}