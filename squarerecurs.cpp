#include <iostream>
using namespace std;
int powersquare(int x, int pow);
int main(){
    int x,pow;
    cin >> x >> pow;
    cout << powersquare(x,pow);
    return 0;
}
int powersquare(int x, int pow){
    if(pow == 0){
       return 1;
    }
    return 2 * powersquare(x,pow-1);
}