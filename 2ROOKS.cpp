#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

    fast

    int t;
    cin>>t;

    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 || y1==y2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

    

    return 0;
}
