#include<bits/stdc++.h>
using namespace std;


void FIFO(int pages[],int n,int capacity){
  unordered_set<int> s;
  queue<int> q;
  int pf = 0;
  for(int i = 0;i<n;i++){
        if(s.size() <= capacity){
            if(s.find(pages[i])==s.end()){
            s.insert(pages[i]);
            q.push(pages[i]);
            pf++;
            }
        }
        else{
            if(s.find(pages[i])==s.end()){
             int front = q.front();
             q.pop();
             s.erase(front);
             s.insert(pages[i]);
             q.push(pages[i]);
             pf++;

            }
            
        }
  }
    cout << "Total Page Faults: " << pf << endl;



}
int main(){

   int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
   int n = sizeof(pages) / sizeof(pages[0]);
   int capacity = 4;

    FIFO(pages, n, capacity);



    return 0;
}
