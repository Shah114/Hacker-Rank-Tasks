// Arithmetic Progression Checker

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq [size];

    for (int i = 0; i < size; ++i) {
        cin >> seq [i];
    }

    float ratio = (float)seq[1] - (float)seq[0];
    bool isAryth = true;

    for (int i = 2; i < 5; ++i) {
        float curRatio = (float)seq[i] - (float)seq[i - 1];

        if (ratio != curRatio) {
            isAryth =  false;
            break;
        }
    }

    if (isAryth == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
