#include<iostream>
#include"text_utility.h"
using namespace std;
void Uppercase (const char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++)
    {if (s[i]>='a'&& s[i]<='z') cout<<char(s[i]-32);
     else cout<<s[i];}
}