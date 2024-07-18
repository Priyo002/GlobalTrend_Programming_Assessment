#include<bits/stdc++.h>
using namespace std;


//Time Complexity : O(n)
void reverseArrayByKSteps(vector<int>& arr,int k){
    int n = arr.size();
    k %= n;
    reverse(arr.begin(),arr.begin()+n-k);
    reverse(arr.begin()+n-k,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    reverseArrayByKSteps(arr,k);

    for(auto x : arr) cout << x << " ";
  
    return 0;
}