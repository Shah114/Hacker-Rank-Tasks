// Number Transformation

#include <iostream>

using namespace std;


int main() {
    
    float X;
    float Y;

    cin >> X >> Y;

    if (X == Y) {
        cout << "Write different numbers!" << endl;
    }
    else {
        if (X > Y) {
            float X_d = (X * 2);
            float Y_n = (X / 2) + (Y / 2);
            cout << X_d << " " << Y_n << endl;
        }
        else if (Y > X) {
            float Y_d = (Y * 2);
            float X_n = (X / 2) + (Y / 2);
            cout << X_n << " " << Y_d << endl;
        }
    }
    
    return 0;
}
