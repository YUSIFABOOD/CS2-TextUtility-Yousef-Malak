#include <iostream>
#include "text_utility.h"
using namespace std;

void reverseString(char* word) {
       int count = 0;
    while (word[length] != '\0') {
        count++;
    }


    for (int i = 0; i < count / 2; i++) {
        int j = length - 1 - i;


        word[i] ^= word[j];
        word[j] ^= word[i];
        word[i] ^= word[j];
    }
}