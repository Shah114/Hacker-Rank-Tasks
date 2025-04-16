#include <iostream>

using namespace std;

int main() {
    
    int N;
    int counter = 0;

    cin >> N;

    while(N > 0) {

        counter++;
        N = N / 10;
    }

    cout << counter << endl;
    
    return 0;
}