#include<iostream>
using namespace std;

int main() {

    int n; 
    cout << "Enter a number: ";
    cin >> n;

    for(int i=1; i<=n; i++) {

        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }

        cout << "*";

        for(int j=1; j<=2*i-3; j++) {
            cout << " ";
        }

        if(i!=1) {
            cout << "*";
        }

        cout << endl;

    }


    for(int i=1; i<=n-1; i++) {
        
        for(int j=1; j<=i; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != n-1) {
            for(int j=0; j<2*(n-i)-3; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;


    }
    

    



    return 0;
}