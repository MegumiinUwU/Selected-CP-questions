#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/problemset/problem/705/A
 * A. Hulk
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
    for (int i = 1; i <= n; ++i) {
        if (i==n){
            if (i%2==0){
                cout<<"I love it ";
                break;
            } else{
                cout<<"I hate it ";
                break;

            }
        }
        if (i%2==0){
            cout<<"I love that ";
        } else{
            cout<<"I hate that ";
        }
    }
    return 0;
}
