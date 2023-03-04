#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/problemset/problem/1511/C
 * Yet Another Card Deck (Rated for Div. 2)
 * By : Youssef Mohamed (MegumiinUwU)
 */





using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,q,x,y;
cin>>n>>q;
deque<ll> jojodeck;
    while (n--){
        cin>>x;
        jojodeck.push_back(x);

    }
    while (q--){

        cin>>y;
        auto i = jojodeck.begin();

        auto found =std::find(jojodeck.begin(), jojodeck.end(),y);
        cout<<found-i+1<<" ";
        jojodeck.erase(found);
        jojodeck.emplace_front(y);
    }


    return 0;
}
