#include <iostream>
using namespace std;
class patterns{
    public:
    int pattern2(int n){
        int i=0;
        int k=0;
    for(int m=0;m<n;m++){
        for(i=n;i>m;i--){
            cout << i;
        }
        
        // cout << k;
        
        if(k==0){
                i +=1;
                k=1;
            }
            else{
                for(int l=0;l<k;l++){
                    cout << " ";
                }
                k+=2;
            }
        for(int j=i+1;j<=n;j++){
            cout << j;
        }
        cout << "\n";
    }
    k=0;
    for(int m=5;m>n-1;m--){
        k+=n;
        int s;
        for(s=n;s>=m-1;s--){
            
            cout << s;
        }
        for(int l=0;l<k;l++){
            cout << " ";
        }
        
        for(int j=s+1;j<=n;j++){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
    }
};
int main(){
    int n;
    cin >> n;
    patterns obj;
    obj.pattern2(n);
    return 0;
}