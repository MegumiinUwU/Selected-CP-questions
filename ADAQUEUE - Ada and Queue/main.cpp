#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://www.spoj.com/problems/ADAQUEUE/
 * ADAQUEUE - Ada and Queue
 * By : Youssef Mohamed (MegumiinUwU)
 */





using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x;
    string s;
    deque<ll> jojo;
    cin>>t;
    bool flag = false;

    while (t--){
        cin>>s;
        if(s=="back"){
            if (jojo.empty()){
                cout<<"No job for Ada?"<<'\n';
                continue;
            }
            if (!flag) {
                cout << jojo.back() << '\n';
                jojo.pop_back();
            }
            else{
                cout<<jojo.front()<<'\n';
                jojo.pop_front();
            }
        }
        else if(s=="front"){
            if (jojo.empty()){
                cout<<"No job for Ada?"<<'\n';
                continue;
            }

            if (!flag) {
                cout<<jojo.front()<<'\n';
                jojo.pop_front();

            }
            else{
                cout << jojo.back() << '\n';
                jojo.pop_back();
            }
        }
        else if(s=="reverse"){
            flag = !flag;

        }
        else if(s=="push_back"){
            if (!flag){
                cin>>x;
                jojo.push_back(x);
            } else{
                cin>>x;
                jojo.push_front(x);
            }

        }
        else if(s=="toFront"){
            if (!flag){
                cin>>x;
                jojo.push_front(x);

            } else{
                cin>>x;
                jojo.push_back(x);

            }

        }

    }
    return 0;
}





