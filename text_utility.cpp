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
}

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
