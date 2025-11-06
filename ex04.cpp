#include<iostream>
using namespace std;

int my_strlen(const char* s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}
int main() {
    string string = "ABCABCABC ABC";
    cout << my_strlen(string.c_str()) << endl;
    return 0;
}