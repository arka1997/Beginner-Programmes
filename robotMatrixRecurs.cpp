#include<iostream>
using namespace std;
int uniquePaths(int m, int n);
int main(){
    int num, num2;
    cin >> num >> num2;
    cout << uniquePaths(num,num2);
}
int uniquePaths(int i, int j,int m, int n) {
        if(i>=m-1|| j>=n-1){
            return 0;
        }
        if(i==m-1 && j==n-1){
            return 1;
        }
        return uniquePaths(i+1,j)+uniquePaths(i,j+1);
    }
    // int uniquePaths(int m, int n, int i=m, int j=n) {
    //     if(m==i-1|| n==j-1){
    //         return 0;
    //     }
    //     if(m==i-1 && n==j-1){
    //         return 1;
    //     }
    //     return uniquePaths(m-1,n)+uniquePaths(m,n-1);
    // }