#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Yaroslav and Permutations
 * Problem link : https://codeforces.com/contest/296/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],arr2[1005]={0};
    set<int> jojo;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        arr2[arr[i]]++;
        jojo.emplace(arr[i]);
    }
    if (jojo.size()==n){
        cout<<"YES";
    } else if (jojo.size()==1){
        cout<<"NO";
    } else {
        sort(arr2,arr2+1005,greater<int>());
        if (arr2[0]>((n+1)/2)){
            cout<<"NO";

        } else{
            cout<<"YES";
        }
    }




    return 0;
}
