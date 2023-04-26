#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/problemset/problem/136/A
 * A. Presents
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,x,maax=0;
cin>>n;
map<int,int> jojo1;

    for (int i = 0; i < n; ++i) {
        cin>>x;
        jojo1[x]=i+1;
    }
    for (int i = 1; i <=n ; ++i) {
        cout<<jojo1[i]<<" ";

    }
    return 0;
}