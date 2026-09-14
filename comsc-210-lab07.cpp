// COMSC-210 | Lab 7 | Ahmad Dharhan

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

//Function Prototypes
string reverseArray(string *arr);
void displayArray(string *arr);

int main() {

    string* arr = nullptr;
    arr = new string[SIZE];

    for(int i = 0; i < SIZE; i++){
        cout << "Enter The Name For Element #" << i << " ";
        getline(cin, *(arr + i));
    }

    cout << "Original Array: ";
    displayArray(arr);
    cout << endl;

    cout << "Reversed Array: ";
    reverseArray(arr);
    displayArray(arr);

    delete[] arr;

    arr = nullptr;

}

string reverseArray(string *arr){
    string* temp = new string[SIZE];

    for(int i = 0; i < SIZE; i++){
        *(temp + i) = *(arr + SIZE - i - 1);
    }

    for(int i = 0; i < SIZE; i++){
        *(arr + i) = *(temp + i);
    }

    delete[] temp;

    return *arr;
}


void displayArray(string* arr){

    for(int i = 0; i < SIZE; i++){
        cout << *(arr + i) << " ";
    }
}