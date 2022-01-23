#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

    fast

    int t;
    cin>>t;

    while(t--){
        int x1,x2;
        cin>>x1>>x2;
        if (x1==x2){
            cout<<"YES\n";
        }
        else if(x1<x2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

    return 0;
}
