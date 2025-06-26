#include<iostream>
#include"text_utility.h"
using namespace std;
void Lowercase (char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++) if (s[i]>='A'&& s[i]<='Z') s[i]+=32;
}
