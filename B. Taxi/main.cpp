#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/158/B
 * B. Taxi
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll taxi=0,groups,n,lobby=0;
int j1=0,j2=0,j3=0,j4=0;
cin>>groups;
    while (groups--){
cin>>n;

if(n==4){
    j4++;
}
else if(n == 3){
    j3++;

}
else if(n == 2){
    j2++;
} else{
    j1++;
}
    }

    taxi=taxi+j4;
    if((j2%2 == 0)   &&  j2>0){
        taxi=taxi+(j2/2);
        j2=0;
    } else if (j2>0){
        taxi=taxi+(j2/2);
        j2 = 1;
    }
    if (j3<j1){
        taxi += j3;
        j1 -= j3;
        j3 = 0;

    } else{
        taxi += j1;
        j3 -= j1;
        j1 = 0;
        }



        if(j1>=2 && j2>0){
            j1-=2;
            j2-=1;
            taxi++;
        }


    while (j1>0 && j3>0){

        j1--;
        j3--;
        taxi++;

    }
    while (j1==0 && j3>0){

        j3--;
        taxi++;

    }
    if(j1==1 && j2==1){
        taxi++;
        j1=0;
        j2=0;
    }
    if (j1==0 && j2>0){

        j2--;
        taxi++;

    }


    while (j1>0 && j3==0 && j2==0){
        if (j1>4){
            j1-=4;
            taxi++;
        } else{
            j1=0;
            taxi++;
        }

    }




cout<<taxi;

    return 0;
}
