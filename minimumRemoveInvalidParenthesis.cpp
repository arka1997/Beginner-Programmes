#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class removeInvalidParenthesis{
    public:
    string removeInvalidBrac(string s){
        int count=0;
        string arr;
        for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            count++;
        }
        else if( s[i] == ')'){
            if(count == 0){
                arr[i] = 0;
                continue;
            }
            else{
                count--;
            }
        }
        arr.push_back(s[i]);
        }
        while(count > 0){
            arr[count--] = 0;
        }
        //Input: ))(( , Output: "" , " (( " , this two brackets will be left in our array stack coz couldn't find its closing bracket, so they need to be removed before retuning the array with valid parenthesis.
        // for(int i=0;i<s.size();i++)
        //     if(arr[i] != 0){
        //         s[i] = arr[i];
        //     }
                return arr;
        }
        
};
int main(){
    string s;
    cin >> s;
    removeInvalidParenthesis obj;
    cout << obj.removeInvalidBrac(s);
}
// Another approach with stack STL
// stack<int> mystack;
//         for(int i=0;i<s.size();i++){
//             if(s[i]  == '('){
//                 mystack.push(i);
//             }
//             else if(s[i] == ')'){
//                 if(!mystack.empty() && s[mystack.top()] == '('){
//                     mystack.pop();
//                 }
//                 else{
//                     s[i] = '*';
//                     //Another approach
//                     // mystack.push(i);
//                 }
//             }
//         }
//         while(!mystack.empty()){
//             s[mystack.top()] = '*';
//             mystack.pop();
            
//             //Another approach
//             // s.erase(mystack.top(),1);
//             // mystack.pop();
//         }
//         string s2;
//         for(int i=0;i<s.size();i++){
//             if(s[i] != '*'){
//                 s2.push_back(s[i]);
//             }
        
//         }
//         return s2;
//  remove moves the non-removed items to the front of the vector and returns an iterator pointing just beyond the last unremoved item. Then std::erase trims the vector from that iterator to the end.
// s.erase(remove(s.begin(),s.end(),'*'),s.end());
