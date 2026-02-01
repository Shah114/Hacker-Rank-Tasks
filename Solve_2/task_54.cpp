#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int number = i;
        bool print = true;

        while (number > 0) {
            
            int tail = number % 10;

            if (tail == 0) {
                print = false;
                break;
            }
            else {
                if (i % tail != 0){
                    print = false;
                    break;
                }
            }

            number = number / 10;
        }

        if (print == true) {
            cout << i << " ";
        }

    }

    cout << endl;
    
    return 0;
}
