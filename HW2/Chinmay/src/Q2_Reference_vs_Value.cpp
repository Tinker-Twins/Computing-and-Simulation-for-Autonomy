/*  Nick Sweeting 2013/10/09
    References vs Values in C++
    MIT License

    Takes input and removes puctuation and spaces, using two different methods.
    It is referred from: https://github.com/pirate/Cpp-Data-Structures/
*/

#include <stdlib.h>
#include <iostream>
using namespace std;

bool ispunctuation(char q) {
    // return true if input character q is puctuation, else return false
    return ispunct(q);
}

char* modifyByCopying(char* raw_input) {
    // modify the input array by creating its copy to remove any puctuations
    char* input_copy = new char[80];
    int i = 0;
    for (int j = 0; j < 80; j++) {
        if (!ispunctuation(raw_input[j])) {
            input_copy[i] = raw_input[j];
            i++;
        }
    }
    return input_copy;
}

char* modifyInPlace(char* raw_input) {
    // modify the input array in place to remove any puctuations
    int i = 0;
    for (int j = 0; j < 80; j++) {
        if (!ispunctuation(raw_input[j])) {
            raw_input[i] = raw_input[j];
            i++;
        }
    }
    return raw_input;
}

int main() {
    // user input
    char raw_input[80] = {0};
    cout << "Please input something with punctuation in it: ";
    cin.getline(raw_input,80);

    cout << "Modify by Copying: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyByCopying(raw_input) << endl << endl;

    cout << "Modify in Place: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyInPlace(raw_input) << endl;
}
