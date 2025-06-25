#include <iostream>
using namespace std;

int count(const char* word) {
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char s[100];
    cin.getline(s, 100);

    cout << count(s) << endl;

    return 0;
