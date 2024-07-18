#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(n)
int longestSubstring(string &s){
    unordered_set<char> isPresent;
    int head = -1, tail = 0;
    int ans = 0;
    int n = s.size();
    while(tail<n){
        while(head+1<n && isPresent.count(s[head+1])==0){
            isPresent.insert(s[head+1]);
            head++;
        }
        ans = max(ans,head-tail+1);
        if(tail<=head){
            isPresent.erase(s[tail]);
            tail++;
        }
        else{
            tail++;
            head = tail-1;
        }
    }
    return ans;
}


int main(){

    string str;
    cin >> str;

    cout << longestSubstring(str) << endl;
  
    return 0;
}