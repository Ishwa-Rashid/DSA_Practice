#include <iostream>
using namespace std;

string removeDuplicates(string s) {
        string str = "";
        
        for(int i=0; i<s.length(); i++){
            if(s[i]==str.back()){
                str.pop_back();
            }
            else{
                str.push_back(s[i]);
            }
        }
        
        return str;
}