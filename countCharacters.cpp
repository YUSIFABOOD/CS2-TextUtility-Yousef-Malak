#include<iostream>
#include"text_utility.h"
using namespace std;
int countCharacters(const char* str)
{
int count = 0;
while (str[count] != '\0'){

count++;

}


return count;
}