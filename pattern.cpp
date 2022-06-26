#include <iostream>
using namespace std;
class patterns{
    public:
    int pattern2(int n){
        int space = n-1;//for space
        int a=65;//for alphabets
        int ch=1;//these are the options for switching between alphabets, "#" , and numeric
        int num=1;//for the numeric values to be incremented by 1
        int count = 1;//for the pattern count, 1, 3 , 5, 7, 9
        
    for(int i=0;i<n;i++){
        for(int i=0;i<space;i++){
            cout << " ";
        }
        space--;
        switch(ch){
        case 1:
        {
            for(int j=count;j>0;j--){
                cout << char(a);
            }
            a++;
            count+=2;
            ch = 2;
            cout << "\n";
            break;
        }
        case 2:
        {
            for(int k=count;k>0;k--){
            cout << "#";
            }
            count+=2;
            ch = 3;
            cout << "\n";
            break;
        }
        case 3:
        {
            for(int k=count;k>0;k--){
            cout << num;
            }
            num++;
            count+=2;
            ch = 1;
            cout << "\n";
            break;
        }
        }
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