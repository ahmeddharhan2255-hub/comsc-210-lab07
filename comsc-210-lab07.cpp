// COMSC-210 | Lab 7 | Ahmad Dharhan

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

//Function Prototypes
string reverseArray(string *arr, int SIZE);
void displayArray(string *arr, int SIZE);

int main() {

    string* arr = nullptr;
    arr = new string[SIZE];

    for(int i = 0; i < SIZE; i++){
        cout << "Enter The Name For Element #" << i << " ";
        getline(cin, *(arr + i));
    }

    reverseArray(arr, SIZE);

}

string reverseArray(string *arr, int SIZE){
    for (int i = 0; i < SIZE; i++){
        *(arr + i) = *(arr + (SIZE - i));
        cout << *(arr + i) << endl;
    }

    return *arr;
}

void displayArray(string* arr, int SIZE){
    cout << "Original Array: ";

    for(int i = 0; i < SIZE; i++){
        cout << *(arr + i) << " ";
    }
}