#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (input.substr(0, 2) == "//") {
        cout << "It's a single line comment" << endl;
    } else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2, 2) == "*/") {
        cout << "It's a multiple line comment" << endl;
    } else {
        cout << "The input is not a comment" << endl;
    }

    return 0;
}
