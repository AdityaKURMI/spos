#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    vector<int> v;
    int hit=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<v.size();j++){
            if(v[j]==a[i]){
                flag=true;
                break;
            }
        }
        cout<<a[i]<<endl;
        if(flag){ 
            hit++;
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else if(v.size()<m){ 
            v.push_back(a[i]);
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else{
            int x=0,mx=0;
            bool flag1=true;
            for(int j=0;j<v.size();j++){
                if(mp[v[j]]<=i){
                    v[j]=a[i];
                    flag1=false;
                    break;
                }
                else if(mp[v[j]]>mx){
                    x=j;
                    mx=mp[v[j]];
                }
            }
            if(flag1){
                v[x]=a[i];
            }
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<hit<<endl;
}