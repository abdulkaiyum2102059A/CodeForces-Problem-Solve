#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
              vector<int>my;
        int nu;
        cin>>nu;

        if(nu%10!=0){
                my.push_back(nu%10);
           }
        int ans = nu%10;
        nu-=ans;

        if(nu%100!=0){
                my.push_back(nu%100);
           }
        ans = nu%100;
        nu-=ans;

        if(nu%1000!=0){
                my.push_back(nu%1000);
           }
        ans = nu%1000;
        nu-=ans;

        if(nu%10000!=0){
                my.push_back(nu%10000);
           }

        if(nu%10000==0&&nu>=10000){
                my.push_back(nu);
           }
       cout<<my.size()<<endl;

       for(int i=0;i<my.size();i++){
        cout<<my[i]<<" ";
       }
    }
}
