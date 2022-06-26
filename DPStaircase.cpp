#include <iostream>
using namespace std;
int DP[1000];
int DPfunc(int n){
    if(n <= 2){
        return n;
    }
    if(DP[n] != -1){
        // cout << "DP[n]";
        return DP[n];
    }
    else{
        //before returning we store the values 
        DP[n] = DPfunc(n-1) + DPfunc(n-2);
    }
        return DP[n];
}
int DPStaircase(int n){
    for(int i = 0; i < n; i++)
        {DP[i] = -1;}
        return DPfunc(n);
}
int main(){
    int n;
    cin >> n;
    
    cout << DPStaircase(n);
    for(int i=0;i<n;i++){
        cout << DP[i];
    }
    
    return 0;
}
