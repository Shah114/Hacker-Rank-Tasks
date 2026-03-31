// Concatenate Strings using Pointer

#include <iostream>
#include <cstring>

using namespace std;


int main() {
    
    char str1[100];
    char str2[100];

    char *s1;
    char *s2;

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    s1 = str1;
    s2 = str2;
    
    int len1 = strlen(s1);
    
    s1 = s1 + len1;
    
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    
    *s1 = '\0';
    
    cout << "Concatenated string: " << str1 << endl;
    
    return 0;
}
