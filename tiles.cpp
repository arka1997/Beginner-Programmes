#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int tiles(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    else{
        //for tiles with n = 3, value of tiles[3] = tiles[2] +tiles[1],
        // same way , when n=4, tiles[4] = tiles[3] + tiles[2];
        return tiles(n-1) + tiles(n-2);
    }
}
int main(){
    int n;
    cin >> n;

    cout << tiles(n);
}