#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/contest/1791/problem/B
 * B. Following Directions
 * By : Youssef Mohamed (MegumiinUwU)
 */
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.sync_with_stdio(0);
int t, n; string s;
cin>> t;
    while (t--){
        int left=0,right=0,up=0,down=0; bool flag = false;
        cin>>n>>s;

        for (int i = 0; i < s.size(); ++i) {

            if(s[i]=='U'){
                up+=1;
                down-=1;
            }
            else if (s[i]=='D'){
                up-=1;
                down+=1;

            }
            else if (s[i]=='R'){
                right+=1;
                left-=1;
            } else if(s[i]=='L'){
                right-=1;
                left+=1;

            }

            if (up==1 && right==1){
                flag = true;
                break;
            }




        }
        if (flag){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }

    }

    return 0;
}
