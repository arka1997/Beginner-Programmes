#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a];
        for(int j=0;j < sizeof(arr)/sizeof(arr[0]); j++){
            cout << arr[j];
    }
}