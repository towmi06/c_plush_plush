#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        int n,m;    cin>>n>>m;
        set<int> Hop,Giao;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            Hop.insert(x);
        }
        for(int i=0;i<m;i++){
            int x;  cin>>x;
            if(Hop.find(x)!=Hop.end())
                Giao.insert(x);
            Hop.insert(x);
        }
        for(auto it=Hop.begin();it!=Hop.end();it++)
            cout<<*it<<" ";
        cout<<"\n";
        for(auto it=Giao.begin();it!=Giao.end();it++)
            cout<<*it<<" ";
        cout<<"\n";
    }
    return 0;
}
