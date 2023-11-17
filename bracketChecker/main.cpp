#include <iostream>
#include <string>
#include "checker.h"

using namespace std;

bool testing(){
    if(bracketChecker("()()") != true) return false;
    if(bracketChecker(")))") != false) return false;
    return true;
}

/**
@mainpage Application for check brackets in string
Tasks:
- check brackets

\authors
Alexandr Kuzmichev
\version
1.1.0
*/

/*
@details
 The main function of the application
 */
int main()
{
    if(testing() == true) cout << "Tests pass" << endl;
    else cout << "Tests failed" << endl;
    cout << endl << "---------run program---------" << endl;
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
