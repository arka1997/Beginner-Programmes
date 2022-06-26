#include <iostream>
#include <array>
using namespace std;
int main(){
    //this two arrays  have their pattern different, but both are static, so we generally dont use them in "CP"
    string s = "jkhjkh";
    int arr[3] = {3,4,5};
    //Now we will see that what are functions we can use using this static array list
    array<int,4> arr2= {3,4,5,6};
    cout << arr;//pointing to 1st element's memory address
    cout << *arr;//here *arr is now a pointer variable,pointing to first element of the array
    for(int i=0;i<s.length();i++){
        cout << s[i] << "\n";//print character of the string one by one
    }
    auto a =  end(arr) ;
    auto b = "sdsd";
    cout << *b;
    
    // for(int i = 0;i<end(arr);i++){
    //     cout << s[i] << "\n";
    // }
    // if(){
    //             if(mymap.find(arr[i]))
    //         }
}