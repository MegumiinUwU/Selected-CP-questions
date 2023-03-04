#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/problemset/problem/381/A
 * Sereja and Dima
 * By : Youssef Mohamed (MegumiinUwU)
 */





using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
deque<int> cards;
int n,x,y,seraj=0,dima=0;
bool sturn = true,flag= false,flag2= false;
cin>>n;

    while (n--){

        cin>>x;
        cards.emplace_back(x);
    }
    if(cards.size() % 2 ==0){
        flag = true;
    }
    if(cards.size() == 1){
        seraj+=x;
        flag2=true;
    }


    while (true){
        if (flag2){
            break;
        }
        if (cards.front()>=cards.back() && sturn){
            seraj=seraj+cards.front();
            cards.pop_front();
            sturn=!sturn;
        } else if(cards.front()<=cards.back() && sturn){
            seraj=seraj+cards.back();
            sturn=!sturn;
            cards.pop_back();

        } else if(cards.front()>=cards.back() && !sturn){
            dima=dima+cards.front();
            sturn=!sturn;
            cards.pop_front();
        }
        else if (cards.front()<=cards.back() && !sturn){
            dima=dima+cards.back();
            sturn=!sturn;
            cards.pop_back();
        }
        if (cards.size() == 1){
            break;
        }


    }
    if(flag== false && flag2== false){
        seraj+=cards.front();
        cards.pop_back();
    } else if (flag== true && flag2== false){
        dima+=cards.front();
    }
cout<<seraj<<" "<<dima;

    return 0;
}
