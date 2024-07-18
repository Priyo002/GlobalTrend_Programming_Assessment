#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(n)
int getFactorial(int n){
    int ans = 1;
    for(int i=2;i<=n;i++){
        ans *= i;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;

    cout << getFactorial(n) << endl;
  
    return 0;
}