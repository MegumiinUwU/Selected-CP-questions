#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/problemset/problem/1676/E
 * E. Eating Queries
 * By : Youssef Mohamed (MegumiinUwU)
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
       int n,q,jojo;
       cin>>n>>q;
       deque<int> arr;
       int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin>>jojo;
            arr.emplace_back(jojo);
            sum+=jojo;
        }
        sort(arr.rbegin(),arr.rend());  //sort them in reverse
        for (int i = 1; i < n; ++i) {
            arr[i]+=arr[i-1];
        }                                        //make all possible sums
        while (q--){
            int x;
            cin>>x;
            if (sum<x){
                cout<<-1<<'\n';
            }
            else if(sum==x){
                cout<<n<<'\n';
            }
            else{
                int l=0,r=n-1,mid;
                while (r>=l){
                    mid=(l+r)/2;

                    if (arr[mid]>=x){               //if number is in the sum range or in the array
                        r= mid-1;
                        jojo = mid;
                    } else{
                        l=mid+1;
                    }



                }
                cout<<jojo+1<<'\n';

            }

        }

    }


    return 0;
}


