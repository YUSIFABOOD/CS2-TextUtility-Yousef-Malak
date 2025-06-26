#include<iostream>
#include "text_utility.h"
using namespace std;
bool isPalindrom (const char* s)
{
    int length =countCharacters(s);   
    for (int left=0, right = length-1; left<right;left++,right--)
    {if (s[left] != s[right]) return false;}
    return true;
}

void Lowercase (char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++) if (s[i]>='A'&& s[i]<='Z') s[i]+=32;
}

void Uppercase (char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++) if (s[i]>='a'&& s[i]<='z') s[i]-=32;
}

int substringoccur (const char* s,const char* f)
{
   int length= countCharacters(s);
   int sublength= countCharacters(f);
   if(length==0||sublength==0) return 0;
   int countSub=0;
   for(int i=0; i<=length-sublength; i++)
   {
      bool isSub=true;
      for(int j=0; j<sublength; j++)
      {
         if(s[i+j]!=f[j]) {isSub=false;break;}
      }
      if(isSub) countSub++;
   }
   return countSub;
}