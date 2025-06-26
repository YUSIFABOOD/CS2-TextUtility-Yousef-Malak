#include <iostream>
#include "text_utility.h"
using namespace std;



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