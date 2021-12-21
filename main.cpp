#include <iostream>
using namespace std;
int main() {
    int i,num=8,n;
    n = num/2;
    int x = n;
    cout<<num<<"\t"<<n<<endl;
    for (i=1;i<=n;i++){

        for (int j = n-i; j > 0; j--) {
            cout<<"*";
        }
        cout<<" ";
        if (i%2 == 0) {
            if (i > 3) {
                for (int o = 0; o <= i+1; o++) {
                    if (i != 1) { cout<<"*"; }
                }
            } else {
                for (int o = 0; o < i; o++) {
                    if (i != 1) { cout<<"*"; }
                }
            }
        } else {
            for (int o = 0; o <= i; o++) {
                if (i != 1) { cout<<"*"; }
            }
        }

        cout<<" ";
        for (int m = n-i; m > 0; m--) {
            cout<<"*";
        }
        x--;
        // Bottom Portion
        if (x == 0) {
            for (int j = 0; j < n-i; j++) {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for (i=n;i>=1;i--){

        for (int j = n-i; j > 0; j--) {
            cout<<"*";
        }

        cout<<" ";

        if (i%2 == 0) {
            if (i > 3) {
                for (int o = 0; o <= i+1; o++) {
                    if (i != 1) { cout<<"*"; }
                }
            } else {
                for (int o = 0; o < i; o++) {
                    if (i != 1) { cout<<"*"; }
                }
            }
        } else {
            for (int o = 0; o <= i; o++) {
                if (i != 1) { cout<<"*"; }
            }
        }
        cout<<" ";
        for (int m = n-i; m > 0; m--) {
            cout<<"*";
        }
        x--;
        // Bottom Portion
        if (x == 0) {
            for (int j = 0; j < n-i; j++) {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}