#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Dog {
    public: 
    virtual void bark() {
        cout << ?Woof!? << endl;
        }
        virtual void eat() {
            cout << ?The dog has eaten.? << endl;
            }
            };
            class Bird {
                public: 
                virtual void chirp() {
                    cout << ?Chirp!? << endl;
                    }
                    virtual void eat() {
                        cout << ?The bird has eaten.? << endl;}
                        };
                        class DogBird: public Dog, public Bird {};
                        int main(int argc, char ** argv) {
                            DogBird myConfusedAnimal;
                            myConfusedAnimal.eat();}