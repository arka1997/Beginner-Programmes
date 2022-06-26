Fib(0)  Fib(1)	Fib(2)	Fib(3)	Fib(4)	Fib(5)	Fib(6)
    0        1	    1	    2	    3	    5	    8
    Fib(2) = Fib(1) - Fib(0),
    Fib(3) = Fib(2) - Fib(1),
    Fib(4) = Fib(3) - Fib(2),
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class DPFibbo(){
    int fibbo(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
    }
};
int main(){
int n;
cin >> n;
DPFibbo obj;
obj.fibbo(n);
} //431507