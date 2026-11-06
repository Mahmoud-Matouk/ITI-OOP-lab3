#include <iostream>
#include "../include/utils.h"
using namespace std;

int main() {
        char arr[] = "MaHmouD MaTouK";
        char output[30];
        cout << "Original: " << arr << endl;
        
        // uppsercase
        cout << "Uppercase: " << toUpper(arr, output) << endl;

        // lowercase
        cout << "Lowercase: " << toLower(arr, output) << endl;

        // strCompare
        char str1[] = "Hello";
        char str2[] = "hello";
        strCompare(str1, str2);

        // strCopy
        char str3[] = "I Love Eng. Mina";
        cout << "Copied string: " << strCopy(str3, output) << endl;
    return 0;
}