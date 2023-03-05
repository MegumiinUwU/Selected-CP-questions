#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://atcoder.jp/contests/abc066/tasks/arc077_a
 * C - pushpush
 * By : Youssef Mohamed (MegumiinUwU)
 */




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.sync_with_stdio(0);

deque<ll> jojo;
ll op,x;
cin>>op;
    for (int i = 0; i <op ; ++i) {
       cin>>x;
       if (i%2 == 0){
           jojo.emplace_back(x);
       } else{
           jojo.emplace_front(x);
       }

    }


        if (op%2 ==0){
            for (int i = 0; i < op; ++i) {
                cout << jojo[i] << " ";
            }
        } else{
            for (int i = 0; i < op; ++i) {
                cout<<jojo.back()<<" ";
                jojo.pop_back();

            }
        }




    return 0;
}
