#include <iostream>
using namespace std;
void permutation(string &s, int i, vector<string> &str);
    
class Solution {
    public:
    char uppercase(char c){
                if(c >= 'a' && c <= 'z'){
                return c - 32;
                }return c;
            }
            char lowercase(char c){
                if(c >= 'A' && c <= 'Z'){
                return c + 32;
                }return c;
        }
    void permutation(string &s, int i, vector<string> &str){
        
        if(i>=s.length()){
            str.push_back(s);
            return;
        }
            //we return when base case is satisfied, to avoid falling into infinite recursion
            
            if(s[i] >= '0' && s[i]<= '9'){
                permutation(s,i+1,str);
            }
            else{
                int temp = s[i];
                s[i] = lowercase(s[i]);
                permutation(s, i+1,str);
                s[i] = temp;
                s[i] = uppercase(s[i]);
                permutation(s, i+1, str);
                s[i] = temp;
            }
        }
public:
    //this vector string means it will initialise a list of string with dynamic size
    vector<string> letterCasePermutation(string s ) { 
        vector<string> str;
        permutation(s, 0, str);
        return str;
    }
};
int main(){
    string s;
    cin >> s;
    cout << letterCasePermutation(s);
}
