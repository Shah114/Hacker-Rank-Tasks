// Odd Digit Count

#include <iostream>

using namespace std;


int main() {
    
    int n;
    
    cin >> n;
    
    int count = 0;
    
    while (n > 0) {
        int a = n % 10;
        if (a % 2 != 0) {
            count++;
        }
        n = n / 10;
    }
    
    cout << count << endl;
        
    return 0;
}
