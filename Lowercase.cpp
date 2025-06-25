#include<iostream>
#include"text_utility.h"
using namespace std;
void Lowercase (const char* s)
{
    int length=0;
    while(s[length]!=0) length++;
    for (int i=0; i<length;i++)
    {if (s[i]>='A'&& s[i]<='Z') cout<<char(s[i]+32);
     else cout<<s[i];}
}
