#include <iostream>
#include "text_utility.h"
using namespace std;

void countVowelsAndConsonants(const char* str) {
   int  countV = 0;
    int countC = 0;
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

    cout << the number of vowels :<< countV << endl << the number of constansts: << countC << endl;  
}
