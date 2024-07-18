#include<bits/stdc++.h>
using namespace std;

//Time Complexity : O(n)
int getMaxDifference(vector<int>& arr){
    int n = arr.size();
    int maxNumber = INT_MIN, minNumber = INT_MAX;
    for(int i=0;i<n;i++){
        maxNumber = max(maxNumber,arr[i]);
        minNumber = min(minNumber,arr[i]);
    }
    return abs(maxNumber-minNumber);
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];

    cout << getMaxDifference(arr) << endl;
  
    return 0;
}