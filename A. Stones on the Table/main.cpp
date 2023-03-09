#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/266/A
 * A. Stones on the Table
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,removedstones=0;
string s;
cin>>n>>s;
    for (int i = 0; i < n; ++i) {
        if(s[i]==s[i+1]){
            removedstones++;
        }


    }
cout<<removedstones;

    return 0;
}
