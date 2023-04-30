#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Dice Tower
 * problem link : https://codeforces.com/contest/225/problem/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,x,y,z;
bool flag= false;
cin>>n;
cin>>x;
x=7-x;
    for (int i = 0; i < n; ++i) {
        cin>>y>>z;
        if (y==x || z==x || 7-y == x || 7-z == x){
            flag= true;
            break;
        }
    }
    if (flag){
        cout<<"NO";
    } else{
        cout<<"YES";
    }



    return 0;
}