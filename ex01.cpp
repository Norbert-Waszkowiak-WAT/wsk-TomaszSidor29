#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int* p = &x;
    cout << p;
    cout << *p;
    *p = 3;
    cout << x;
    return 0;
}