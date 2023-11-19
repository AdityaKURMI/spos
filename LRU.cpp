#include<bits/stdc++.h>
using namespace std;

void LRU(int pages[],int n,int capacity){
 unordered_set<int> s;
 unordered_map<int ,int> mp;
 int pf = 0;
 for(int i = 0;i<n;i++){

    if(s.size() < capacity){
        if(s.find(pages[i]) == s.end()){
           s.insert(pages[i]);
           pf++;

        }
        mp[pages[i]] = i;

    }
    else{
        if(s.find(pages[i]) == s.end()){
          int lru = INT_MAX,val;
          for(auto x:mp){
            if(x.second < lru){
                lru = x.second;
                val = x.first;
                cout<<" val is "<<val<<endl;
            }
          }
          s.erase(val);
          s.insert(pages[i]);
          pf++;


        }
        mp[pages[i]] = i;
         
        
    }

    }
    cout<<" page faults = "<<pf<<endl;



 }





int main(){
   int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
   int n = sizeof(pages) / sizeof(pages[0]);
   int capacity = 4;

    LRU(pages, n, capacity);




    return 0;
}