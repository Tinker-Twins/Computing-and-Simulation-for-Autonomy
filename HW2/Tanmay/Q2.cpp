/*  Nick Sweeting 2013/10/09
    References vs Values in C++
    MIT License

    Takes input and removes puctuation and spaces, using two different methods.
    It is referred from: https://github.com/pirate/Cpp-Data-Structures/
*/

#include <stdlib.h>
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// returns true if input character q is puctuation, else false
bool ispunctuation(char q) {
    // complete the functions here ...
    if (ispunct(q) != 0) return true; // Check if given char is a punctuation
    else return false;
}

char* modifyAndCopy(char *raw_input) {
    // complete the functions here ...
    char* mod_array = new char[80]; // Create a new array for modification
    int j = 0; // Keep track of modified array index
    for (int i=0; i<80; i++) { // Check for punctuations throughout the array
        if (!ispunctuation(raw_input[i])) { // Value unchanged if not a punctuation
            mod_array[j] = raw_input[i]; j++; // Location may/may not change (continuous indexing)
        }
    }
    return mod_array;
}

char* modifyInPlace(char *raw_input) {
    // complete the functions here ...
    int j = 0; // Keep track of modified array index
    for (int i=0; i<80; i++) { // Check for punctuations throughout the array
        if (!ispunctuation(raw_input[i])) { // Value unchanged if not a punctuation
            raw_input[j] = raw_input[i]; j++; // Location may/may not change (continuous indexing)
        }
    }
    return raw_input;
}

int main() {
    // user input
    char raw_input[80] = {0};
    cout << "Please input something with punctuation in it: ";
    cin.getline(raw_input,80);

    cout << "Modify and Copy: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyAndCopy(raw_input) << endl << endl;

    cout << "Modify in Place: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyInPlace(raw_input) << endl;
}
