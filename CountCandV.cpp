#include <iostream>
#include "text_utility.h"
using namespace std;

void countVowelsAndConsonants(const char* str, int& countV, int& countC) {
    countV = 0;
    countC = 0;
    int length = countCharacters(str);

    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
                ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U') {
                countV++;
                } else {
                    countC++;
                }
        }
    }
}
