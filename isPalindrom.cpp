#include<iostream>
#include"text_utility.h"
using namespace std;
bool isPalindrom (const char* s)
{
    int length=0;
    while(s[length]!=0) length++;
    for (int left=0, right = length-1-left; left<right;left++,right--)
    {if (s[left] != s[right]) return false;}
    return true;
}
