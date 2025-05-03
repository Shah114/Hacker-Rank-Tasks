#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = num / 100;

    cout << c << a << b << endl;
    
    return 0;
}