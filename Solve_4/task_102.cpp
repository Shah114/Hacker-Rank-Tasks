// String Copy using Pointer

#include <iostream>

using namespace std;


int main() {
    
    char source[100];
    char destination[100];

    char *ptrSource;
    char *ptrDestination;

    cin.getline(source, 100);

    ptrSource = source;
    ptrDestination = destination;

    while(*ptrSource != '\0') {
        *ptrDestination = *ptrSource;
        ptrSource++;
        ptrDestination++;
    }

    *ptrDestination = '\0';

    cout << "Copied string: " << destination << endl;
    
    return 0;
}
