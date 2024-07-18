#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(n)
bool isAllCharacterAlphabetic(string &s){
    int n = s.size();
    for(int i=0;i<n;i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) continue;
        return false;
    }
    return true;
}

int main(){

    string s;
    cin >> s;

    if(isAllCharacterAlphabetic(s)) cout << "The string contains only alphabetic character";
    else cout << "The string does not contain only alphabetic character";
  
    return 0;
}