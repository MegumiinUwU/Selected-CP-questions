#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Calculating Function
 * Problem link : https://codeforces.com/problemset/problem/486/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll jojo;
    cin>>jojo;
    if (jojo%2==0){
        cout<<jojo/2;
    } else{

        cout<<(jojo/2 +1) *-1;
    }



    return 0;
}
