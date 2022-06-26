#include <iostream>
#include <stack>
using namespace std;
class ValidparenthesisSecondBrac{
    public:
    int validParenthesis(string str, int n){
    int flag = 1;
    stack<char> Stack;
        for(int i=0;i< n;i++){
                if(str[i] == '{'){
                Stack.push(str[i]);
                }
                else{
                   if(Stack.empty()){//base case, if at the beginning, we have "}" ending brace, then it will not insert any bracket in the first else-if, so it wil directly come here, return false,as braces starting with "}" r not valid
                       flag = 0;
                       break;
                }
                    else{
                        Stack.pop();
                    }
                }
            }
            if(!Stack.empty()){
                flag = 0;
            }
            return flag;
    }
};
int main()
{
    int n; 
    cin >> n;
    string str;
    cin >> str;
    ValidparenthesisSecondBrac obj;
        int bools= obj.validParenthesis(str, n);
        (bools==1) ? cout << "true" : cout << "false";
}  