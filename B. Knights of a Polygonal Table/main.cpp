#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * B. Knights of a Polygonal Table
 * Problem link : https://codeforces.com/contest/994/problem/B
 * Name : Youssef Mohamed (MegumiinUwU)
 */




int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    deque<pair<ll,ll>> jojopowa;
    set<pair<ll,ll>> jojoset;
    ll jojocoins[n],jojofin[n];
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;
        jojopowa.emplace_back(x,i);
    }
    sort(jojopowa.begin(),jojopowa.end());
    for (int i = 0; i < n; ++i) {
        cin>>jojocoins[i];
    }
    ll total=0;
    for (int i = 0; i < n; ++i) {
        int dio = jojopowa[i].second;
        jojofin[dio]= jojocoins[dio]+total;
        total+=jojocoins[dio];
        jojoset.emplace(jojocoins[dio],dio);
        if (jojoset.size()>k){
            total-=(jojoset.begin()->first);
            jojoset.erase(*jojoset.begin());

        }

    }
    for (int i = 0; i < n; ++i) {
        cout<<jojofin[i]<<" ";
    }


    return 0;


}
