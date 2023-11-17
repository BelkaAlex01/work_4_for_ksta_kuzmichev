#include <string>

using namespace std;


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
