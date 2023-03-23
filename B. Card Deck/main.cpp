#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/contest/1492/problem/B
 * B. Card Deck
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--) {
        int n;
        deque<int>jojo,jojo2;
        map<int,int>morioh;                                //jojo2 for answer , map for organizing in ascending while keeping the index
        cin>>n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            morioh[x]=i;
            jojo.emplace_back(x);
        }

        while (jojo2.size() < n){
            auto it = *(morioh.rbegin());
            int indx = it.second;
            for (int i = indx; i <jojo.size() ; ++i) {                     //using the highest value index we can push to the answer
                jojo2.emplace_back(jojo[i]);
                morioh.erase(jojo[i]);

            }
            for (int i = jojo.size()-1; i >=indx ; --i) {
                jojo.pop_back();
            }
        }
        for (int i = 0; i < n; ++i) {
            cout<<jojo2[i]<<" ";
        }
        cout<<'\n';



    }

    return 0;
}


