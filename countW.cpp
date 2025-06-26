#include<iostream>
#include"text_utility.h"
using namespace std;

int countW(const char* str)
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