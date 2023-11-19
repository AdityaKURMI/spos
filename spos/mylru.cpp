#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
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
            if(v.size()>1 && v[1]==a[i]){
                v[1]=v[0];
                v[0]=a[i];
            }
            else if(v.size()>2 && v[2]==a[i]){
                v[2]=v[1];
                v[1]=v[0];
                v[0]=a[i];
            }
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else if(v.size()==0){ 
            v.push_back(a[i]);
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else if(v.size()==1){ 
            v.push_back(a[i]);
            v[1]=v[0];
            v[0]=a[i];
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else if(v.size()==2){ 
            v.push_back(a[i]);
            v[2]=v[1];
            v[1]=v[0];
            v[0]=a[i];
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else{
            v[2]=v[1];
            v[1]=v[0];
            v[0]=a[i];
            for(int j=0;j<v.size();j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<hit<<endl;
}