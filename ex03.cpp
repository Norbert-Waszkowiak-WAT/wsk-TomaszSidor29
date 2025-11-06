#include <iostream>
using namespace std;

void min_max(int* arr, int size, int* min, int* max){
    *min = arr[0];
    *max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < *min) *min = arr[i];
        if(arr[i] > *max) *max = arr[i];
    }
}

int main(){
    int tab1[5] = {0,1,2,3,4};
    int tab2[5] = {5,6,7,8,9};
    int min = -1;
    int max = -1;
    return 0;
}