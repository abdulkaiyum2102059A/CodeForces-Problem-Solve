#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    while(n--){
        cin>>a>>b>>c;

        if(c==a+b){
            cout<<"+"<<endl;
        }
         if(c==a-b){
            cout<<"-"<<endl;
        }
    }
}
