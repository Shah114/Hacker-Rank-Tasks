// Number Selection

#include <iostream>

using namespace std;


int main() {
    
    float A;
    float B;
    float C;

    cin >> A >> B >> C;

    if (A > 1 && A < 3) {
        if (B > 1 && B < 3) {
            if (C > 1 && C < 3) {
                cout << A << " " << B << " " << C << endl;
            }
            else {
                cout << A << " " << B << endl;
            }
        }
        else if (C > 1 && C < 3) {
            cout << A << " " << C << endl;
        }
        else {
            cout << A << endl;
        }
    }
    else if (B > 1 && B < 3) {
        if (C > 1 && C < 3) {
            cout << B << " " << C << endl;
        }
        else {
            cout << C << endl;
        }
    }
    else if (C > 1 && C < 3) {
        if (B > 1 && B < 3) {
            cout << B << " " << C << endl;
        }
        else {
            cout << C << endl;
        }
    }
    else {
        cout << "No Numbers Found" << endl;
    }
    
    return 0;
}
