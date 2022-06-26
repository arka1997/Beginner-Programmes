#include <iostream>
using namespace std;
int TOH(int n,int b, int c, int d);
int main(){
    int n;
    cin >> n;
    cout << TOH(n, 1, 2 ,3);
}
    int TOH(int n, int b, int c, int d){
        if(n==0){
            cout << b << c;
            return 1;
            }
    TOH(n-1,b,d,c);
    return b << c;
}