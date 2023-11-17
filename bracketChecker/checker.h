#include <string>

using namespace std;

/**
 @brief Check string
 @details
 A function that is simply bracker checker
 @param string

 @return result bool answer. True - string correct, false - string incorrect
 */
bool bracketChecker(string s){
    int len = s.length();
    int cnt = 0;
    char last = '0';
    for(int i = 0; i<len;i++){
        if(s[i]=='('){
            cnt++; last = '(';
        }
        else if( s[i]==')'){
            if(cnt){
                cnt--;
                if(last !='(' && last!=')') return false;
            }
            else return false;
            last = ')';
        }
    }
    return true;
}
