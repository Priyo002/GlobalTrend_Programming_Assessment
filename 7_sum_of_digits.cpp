#include<bits/stdc++.h>
using namespace std;

// Time Complextiy : O(Number of digits)
int getSumOfDigits(int n){
    int sum = 0;
    while(n>0){
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    cout << getSumOfDigits(n) << endl;
  
    return 0;
}