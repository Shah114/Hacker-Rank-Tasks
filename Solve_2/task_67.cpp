// Friendly Numbers

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int m, n;
    
    cin >> m >> n;
    
    for (int num = m; num <= n; num++) {
        
        int sum_num_div = 0;
        
        for (int a = 1; a <= num/2; a++) {
            if (num % a == 0) {
                sum_num_div = sum_num_div + a;
            }
        }
        
        int sum_sec_div = 0;
        for (int b = 1; b <= sum_num_div/2; b++) {
            if (sum_num_div % b == 0) {
                sum_sec_div = sum_sec_div + b;
            }
        }
        
        if (num == sum_sec_div && num < sum_num_div && num != sum_num_div) {
            cout << "(" << num << ", " << sum_num_div << ")" << endl;
        }
    }
    
    return 0;
}
