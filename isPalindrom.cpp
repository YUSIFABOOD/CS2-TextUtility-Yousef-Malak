#include<iostream>
#include"text_utility.h"
using namespace std;
bool isPalindrom (const char* s)
{
    int length =countCharacters(s);   
    for (int left=0, right = length-1; left<right;left++,right--)
    {if (s[left] != s[right]) return false;}
    return true;
}
