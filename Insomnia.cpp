#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    for(int i=1;i<d;i++){
        if(d%(k*i)==0){
            count++;
        }if(d%(l*i)==0){
            if(l*i!=k*i)
            count++;
        }if(d%(m*i)==0){
            if(m*i!=l*i)
            count++;
        }if(d%(n*i)==0){
             if(n*i!=m*i)
            count++;
        }
    }
    cout<<count;
}
