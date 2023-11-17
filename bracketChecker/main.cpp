#include <iostream>
#include <string>
#include "checker.h"

using namespace std;

int main()
{
    while(true){
        string s;
        cout << "Enter a string: ";
        cin >> s;
        if(bracketChecker(s) == true) cout << "String is correct";
        else cout << "String incorrect";
        cout << endl << "--------------" << endl;
    }

    return 0;
}
