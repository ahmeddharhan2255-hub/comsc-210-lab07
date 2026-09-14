// COMSC-210 | Lab 7 | Ahmad Dharhan

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

//Function Prototypes
void reverseArray();
void displayArray();

int main() {

    string* arr = nullptr;
    arr = new string[SIZE];

    for(int i = 0; i < SIZE; i++){
        cout << "Enter The Name For Element #" << i;
        cin >> *(arr + i);
    }

    

}

void reverseArray(){

}

void displayArray(string* arr, int SIZE){
    for(int i = 0;)
}