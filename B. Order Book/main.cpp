#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * B. Order Book
 * problem link : https://codeforces.com/contest/572/problem/B
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,m;cin>>n>>m;
map<ll,ll>b,s;
    while (n--){
        char jojo;
        int dio,nami;
        cin>>jojo;
        if (jojo=='B'){
            cin>>dio>>nami;
            if (b.count(dio)>0){
                b[dio]=b[dio]+nami;
            } else{
                b.emplace(dio,nami);
            }

        } else{
            cin>>dio>>nami;
            if (s.count(dio)>0){
                s[dio]=s[dio]+nami;
            } else{
                s.emplace(dio,nami);
            }
        }


    }vector<pair<int,int>> final;
    auto idd = s.begin();
    int xx=0;
    while (xx<m && s.size()>0){
        final.emplace_back(idd->first,idd->second);
        s.erase(idd);
        idd = s.begin();
        xx++;
    }

    int i =0;
auto itt1 = final.rbegin();
    while (itt1!=final.rend() && i<m){
        cout<<'S'<<" "<<itt1->first<<" "<<itt1->second<<'\n';
        itt1++;
        i++;
    }
    i=0;
    auto  itt2 = b.rbegin();
    while (itt2!= b.rend() && i<m){
        cout<<'B'<<" "<<itt2->first<<" "<<itt2->second<<'\n';
        itt2++;
        i++;
    }


    return 0;
}