// Number Transformation

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    
    float x, y;

    cin >> x >> y;

    if (x < 0 && y < 0) {
        float a_x = abs(x);
        float a_y = abs(y);

        cout << a_x << " " << a_y << endl;
    }
    else if (x < 0 || y < 0) {
        float x_new = x + 0.5;
        float y_new = y + 0.5;

        cout << x_new << " " << y_new << endl;
    }
    else if (x > 0 && y > 0) {
        if (x <= 0.5 || x >= 2) {
            if (y <= 0.5 || y >= 2) {
                float x_r = (x / 10);
                float y_r = (y / 10);
                cout << x_r << " " << y_r << endl;
            }
            else {
                cout << x << " " << y << endl;
            }
        }
        else {
            cout << x << " " << y << endl;
        }
    }
    else {
        cout << x << " " << y << endl;
    }
    
    return 0;
}
