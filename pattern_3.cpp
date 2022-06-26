#include <iostream>
using namespace std;
class patterns{
    public:
    int pattern2(int n){
        for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << " ";   
        }
        for(int k=0; k<=i;k++){
            cout << "#";
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