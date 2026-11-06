#ifndef UTILS_H
#define UTILS_H
using namespace std;

char* toUpper(char *str, char *output){
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            output[i] = str[i] - 32;
        }else{
            output[i] = str[i];
        }
    }
    return output;
};

char* toLower(char *str, char *output){
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            output[i] = str[i] + 32;
        }else{
            output[i] = str[i];
        }
    }
    return output;

};

int length(char *str){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
};

// compare two strings with length and case sensitivity
void strCompare(char *str1, char *str2){
    int len1 = length(str1);
    int len2 = length(str2);

    if (len1 > len2) {
        cout << "str1 is bigger." << endl;
    } else if (len1 < len2) {
        cout << "str2 is bigger." << endl;
    } else {
        cout << "strings are equal and the case is ";
        for (int i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                cout << "not the same." << endl;
                break;
            } else {
                if (i == len1 - 1)
                    cout << "the same." << endl;
            }
        }
    }
};

char* strCopy(char *str, char *output){
    char *outputStart = output;
    while (*str != '\0') {
        *output = *str;
        str++;
        output++;
    }
    *output = '\0';
    return outputStart;
};

// char* strCopy(const char *src, char *dest) {
//     char *start = dest;
//     while ((*dest++ = *src++));
//     return start;
// }

#endif