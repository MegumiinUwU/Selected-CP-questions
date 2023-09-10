#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;




bool doexist(string jojo, char d){

    for (int i = 0; i < jojo.size(); ++i) {
        if (jojo[i]==d){
            return true;
        }
    }
    return false;

}

bool isprime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        deque<int> jojo;
        for (int i = 0; i < n; ++i) {
            int x; cin>>x;
            jojo.emplace_back(x);
            //if (jojo[i]==jojo[i-1]){
            //    jojo.pop_back();
            //}
        }
        sort(jojo.begin(),jojo.end());
        int jj = jojo.size();
        for (int i = jj-1;i>=0 ;--i) {
            for (int j = i-1; j >=0 ; --j) {
                if (jojo[i]==jojo[j] || jojo[i]-jojo[j]<=1){
                    jojo.pop_back();
                    break;
                }
            }
        }
        if (jojo.size()<=1){
            yes;
        } else{
            no;
        }



    }

    return 0;
}
