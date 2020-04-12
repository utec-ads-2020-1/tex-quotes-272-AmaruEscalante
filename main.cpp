#include <iostream>

using namespace std;

int main() {

    char input;
    bool toggle = true;

    while(cin.get(input)) {
        if(input == '\"' && toggle){
            cout << "``";
            toggle = !toggle;
        }
        else if (input == '\"' && !toggle){
            cout << "\'\'";
            toggle = !toggle;
        }
        //else if (input == '')
        else {
            cout << input;
        }
    }

    return 0;
}