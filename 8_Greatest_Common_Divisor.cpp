#include<bits/stdc++.h>
using namespace std;

//Time Complexity : log(min(a,b))
int getGCD(int a,int b){
    if(a==0){
        return b;
    }
    else{
        return getGCD(b%a,a);
    }
}

int main(){

    int a,b;
    cin >> a >> b;

    cout << getGCD(a,b) << endl;
  
    return 0;
}