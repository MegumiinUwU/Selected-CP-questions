#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Vanya and Fence
 * Problem link : https://codeforces.com/contest/677/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;
    cin>>n>>h;
    int jojoarr[n];
    int width=0;
    for (int i = 0; i < n; ++i) {
        cin>>jojoarr[i];
        if (jojoarr[i]>h){
            width+=2;
        } else{
            width++;
        }
    }
    cout<<width;

    return 0;
}
