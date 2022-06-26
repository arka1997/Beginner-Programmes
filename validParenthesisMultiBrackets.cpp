#include <iostream>
#include <stack>
using namespace std;
class ValidparenthesisMultiBrac{
    public:
    int validParenthesisMulti(string str, int n){
         int flag = true;
    stack<char> Stack;
        for(int i=0;i< str.length();i++){
                if(str[i] == '{'|| str[i] == '['|| str[i]== '('){
                Stack.push(str[i]);
                }
                else{
                   if(Stack.empty()){
                       return false;
                    }
                    else{
                        if(Stack.top() == '{' && str[i]=='}'){
                        Stack.pop();
                        }
                        else if(Stack.top() == '[' && str[i]==']'){
                            Stack.pop();
                        }
                        else if(Stack.top() == '(' && str[i]==')'){
                            Stack.pop();
                        }
                            else{
                                return false;
                            }
                        }
                    }
            }
            if(!Stack.empty()){
                return false;
            }
            return flag;
    }
};
int main()
{
    int n; 
    cin >> n;
    string str;
    cin >> str;//(a(b)c))
    ValidparenthesisMultiBrac obj;
        int bools = obj.validParenthesisMulti(str, n);
        (bools==1) ? cout << "true" : cout << "false";
}