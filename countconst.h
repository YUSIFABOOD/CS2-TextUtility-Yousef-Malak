#include <iostream>
#include "text_utility.h"
using namespace std;



int countconst(const char* str){
int countV=0;
int length = countCharacters(str);
   for(int i=0;i<length;i++){
    if(str[i] =! 'a'||str[i] =! 'A'||str[i] =! 'e'||str[i] =! 'E'||str[i] =! 'i'||str[i] =! 'I'||str[i] =! 'o'||str[i] =! 'O'|| str[i] =! 'u'||str[i] =! 'U' ){

           countV++;

        }



    }
