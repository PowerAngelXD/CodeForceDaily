#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n+10,0);

    for(int i=1;i<=n;++i) cin>>a[i];

    vector<int> vis(n+10,0);

    for(int i=1;i*2<=n;++i){
        if(vis[i]) continue;
        vector<int>q;
        for(int j=i;j<=n;j*=2){
            q.push_back(a[j]);
            vis[j]=1;
        }
        sort(q.begin(),q.end());
        for(int j=i,k=0;j<=n;j*=2,k++){
            a[j]=q[k];
        }
    }

    bool f=1;

    for(int i=1;i<=n;++i){
        if(a[i]!=i){
            f=0;
            break;
        }
    }

    if(f) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _=1;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}