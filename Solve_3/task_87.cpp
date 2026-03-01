// Closest Value to Min, Max, and Mean

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int num;
    cin >> num;

    int max = 0;
    for (int i = 0; i < size; ++i) {
        if (seq[i] > max ) {
            max = seq[i];
        }
    }

    int min = max;
    for (int i = 0; i < size; ++i) {
        if (seq[i] < min) {
            min = seq[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum = sum + seq[i];
    }

    int mean = sum / size;

    int disToMax = abs(num - max);
    int disToMin = abs(num - min);
    int disToMean = abs(num - mean);

    if (disToMin <= disToMax && disToMin <= disToMean) {
        cout << "Minimum" << endl;
    } else if (disToMax <= disToMin && disToMax <= disToMean) {
        cout << "Maximum" << endl;
    } else {
        cout << "Mean" << endl;
    }
    
    return 0;
}
