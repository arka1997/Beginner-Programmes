#include <iostream>
using namespace std;
class CodeDecode{
    public:
    bool checkValidString(string s, int i){
        if(str > "0" && str <= "26"){
            return true;
        }
        return false;
    }
    int CodeDecoderecurs(string s,int i){
    if(i==0){
        return 1;
    }
        strOne = s.substring(0,i+1);
        CodeDecoderecurs(s,i-1);
        int bb = func(checkValidString(s.substring(s,i-1)) + func(s.substring(s, i-2);
        CodeDecoderecurs(i+1,i+1) + CodeDecoderecurs(i+1,i+2);
    }
    int CodeDecode2(string s){
        return CodeDecoderecurs(s,s.length());
    }
};
int main(){
    string n;
    cin >> n;
    cout << CodeDecoderecurs(n);
    // for(int i=0;i<n;i++){
    //     cout << DP[i];
    // }
    return 0;
}