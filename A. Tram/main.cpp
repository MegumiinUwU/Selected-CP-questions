#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/problemset/problem/116/A
 * A. Tram
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,in,out,capacity=0,passengers=0;
cin>>n;
    while (n--){
        cin>>out>>in;
        passengers-=out;
        passengers+=in;
        capacity= max(capacity,passengers);
    }
    cout<<capacity;
    return 0;
}
