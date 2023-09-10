#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Spy Detected!
 * Problem link : https://codeforces.com/problemset/problem/1512/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,repeated,un,pos=1;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
            if (i>1){
                repeated=arr[0];
                un=arr[1];
            }
            if (repeated!=un){
                if (repeated==arr[i]){
                    pos=2;

                } else if (un==arr[i]){
                    pos=1;

                }

            }
            if (repeated==un){
                if (repeated==arr[i]){
                    continue;
                } else{
                    pos=i+1;

                }
            }

        }
        cout<<pos<<'\n';

    }
    return 0;
}
