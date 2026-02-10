// Perfect Numbers

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int N;
  
    cin >> N;
    
    for (int i = 1; i < N; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum = sum + j;
            }
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
