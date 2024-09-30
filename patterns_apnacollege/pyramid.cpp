#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = 1;

    for(int i=1; i<=n; i++) {
        
        // spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }

        num = 1;
        for(int j=1; j<=i; j++) {
            cout << num;
            num++;
        }


        for(int j=1; j<i; j++) {
            num--;
            cout << num-1;  
        }

        cout << endl;
    }

    return 0;
}