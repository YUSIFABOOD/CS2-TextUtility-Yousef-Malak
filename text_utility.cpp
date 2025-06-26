#include<iostream>
#include "text_utility.h"
using namespace std

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

int countCharacters(const char* str)
{

int count = 0;
while (str[count] != '\0'){

count++;

}


return count;
}int countW(const char* str)
{
    int count = 0;
    bool Word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\t') && !Word) {
            Word = true;
            count++;
        } else if (str[i] == ' ' || str[i] == '\t') {
            Word = false;
        }
    }

    return count;
}

void reverseString(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {

        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];

        left++;
        right--;
    }
}

