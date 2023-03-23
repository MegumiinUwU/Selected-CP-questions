#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/problemset/problem/699/A
 * A. Launch of Collider
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll n,x;
   cin>>n;
   string s;
   ll sum = 900000000;
   cin>>s;
   deque<ll> jojo;
    for (ll i = 0; i <n ; ++i) {
        cin>>x;
        jojo.push_back(x);
    }
    for (ll i = 0; i < n; ++i) {
        if (s[i]=='R' && s[i+1]=='L'){

            sum = min(sum,((jojo[i+1]-jojo[i])/2)) ;

        } else{
            continue;
        }

    }
    if (sum==900000000){
        cout<<-1;
    }
    else{
        cout<<sum;
    }

    return 0;
}


