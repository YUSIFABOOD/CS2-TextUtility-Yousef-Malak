#include<iostream>
#include"text_utility.h"

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