#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/problemset/problem/474/A
 * A. Keyboard
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
char c; string s;
cin>>c;
cin>>s;
deque<char> jojo = {'q','w','e','r','t','y','u','i','o','p'}  , jojo2 = {'a','s','d','f','g','h','j','k','l',';'};
deque<char> jojo3 = {'z','x','c','v','b','n','m',',','.','/'};
    for (int i = 0; i < s.size(); ++i) {
        auto it1 = find(jojo.begin(),jojo.end(),s[i]);
        auto it2 = find(jojo2.begin(),jojo2.end(),s[i]);
        auto it3 = find(jojo3.begin(),jojo3.end(),s[i]);
        if (it1!=jojo.end()){
            if (c=='R'){
                s[i]= jojo[((it1-jojo.begin())-1)];
            } else{
                s[i]= jojo[((it1-jojo.begin())+1)];
            }
        } else if (it2!=jojo2.end()){
            int indx2 = it2-jojo2.begin();
            if (c=='R'){
                s[i]= jojo2[((it2-jojo2.begin())-1)];
            } else{
                s[i]= jojo2[((it2-jojo2.begin())+1)];
            }

        } else{
            if (c=='R'){
                s[i]= jojo3[((it3-jojo3.begin())-1)];
            } else{
                s[i]= jojo3[((it3-jojo3.begin())+1)];
            }

        }

    }
    cout<<s;
    return 0;
}