
#include <bits/stdc++.h>
#define ll long long

/* * Problem link https://www.spoj.com/problems/QUEUEEZ/
 * QUEUEEZ - Easy Queue
 * By : Youssef Mohamed (MegumiinUwU)
*/




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    ll elem;
    ll y;
    queue<ll> jojo;
    cin>>x;

    while (x--){
        cin>> y;
        if(y==1){
            cin>>elem;
            jojo.push(elem);
            continue;


        } else if(y==2){
            if(jojo.empty()){
                continue;
            }
            jojo.pop();

        }
        else{
            if(jojo.empty()){
                cout<<"Empty!"<<'\n';
                continue;
            }
            cout<<jojo.front()<<'\n';


        }

    }


}






