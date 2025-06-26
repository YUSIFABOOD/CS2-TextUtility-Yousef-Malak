#include<iostream>
#include"text_utility.h"
using namespace std;
void Uppercase (char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++) if (s[i]>='a'&& s[i]<='z') s[i]-=32;
}