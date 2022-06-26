//Suppose you have an account in the bank. If your balance variable is declared as a public variable in the bank software, your account balance will be known as public,
//  In this case, anyone can know your account balance. So, would you like it? Obviously No.
// So, they declare balance variable as private for making your account safe, so that anyone cannot see your account balance.
// The person who has to see his account balance, will have to access only private members through methods defined inside that class and,
//  this method will ask your account holder name or user Id, and password for authentication.
// Thus, we can achieve security by utilizing the concept of data hiding. This is called Encapsulation in Java.

// My defination, encapsulation is binding data and methods, WHY?
// because suppose we nned to know the account balance of mine from an ATM, but my account details is declared private, so its not visible to the public and no other users(here classes) can access those properties like pin, balance etc., 
//so to access them, we have to give correct pin and password and then we call the public method, where those data is checked with the (private)values like pin, username, if true, then returns balance.
// so encapsulation is used for security concern, here sophisticated data are set to private so that only the class members or the owner of the class can see, rest other classes or users cannot view them.
//so if any particular user has to access this private data, with the help of public function and some security checks the can access the private values.
//Encapsulation, binding of Data and methods and allowing specific users to access those data like account balance after some security checks in public function blocks. Other users cannot access or modify it
#include <iostream>
using namespace std;
class Encapsulate{
    private://by default all variables are set to private & this properties of Employee cannot be accessed from outside
    string name= "deba";//properties
    int pin = 3456;
    int age;
    int balance = 23000;
    public: // setting the methods to public, so that outside users can access this methods
    int validateGetPin(string username, int checkpin){
        if(pin == checkpin && name == username){
            return balance;
        }
            return 0;
    }
    void validateSetAge(){
        age = 24; 
    }
    int validateGetAge(){
        return age; 
    }
};
int main(){
    Encapsulate obj;
    string username;
    int pin;
    cin >> username;
    cin >> pin;
    
    int check = obj.validateGetPin(username,pin);
    if(check == 0){
        cout << "Alert! Wrong Pin";
    }
    else{
        cout << "Booyah!! Account balance is :Rs" << check;
    }
    
    cout << "\n";
    obj.validateSetAge();
    cout << "Your age is" << obj.validateGetAge();
}