#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bb(int w){
    if(w==1){
        return 1;
    }
    else if(w==2){
        return 2;
    }
    else{
        return (w-1)+(w-2);
    }
}
int main(){
    int w;
    cin >> w;

    cout << bb(w);
}