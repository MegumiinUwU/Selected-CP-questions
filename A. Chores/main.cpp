#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/problemset/problem/873/A
 * A. Chores
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,k,x,jojo2=0;
cin>>n>>k>>x;
int y[n];
    for (int i = 0; i < n; ++i) {
        cin>>y[i];
    }
    sort(y,y+n);

    for (int j = n-1; j >=0 ; --j) {
        if (y[j]>x && k!=0){
            jojo2+=x;
            k--;
        }
        else{
            jojo2+=y[j];
        }
    }

cout<<jojo2;

    return 0;
}
