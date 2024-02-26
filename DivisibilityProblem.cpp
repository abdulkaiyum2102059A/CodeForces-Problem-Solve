#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int a,b;


     while(n--){
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        if(a%b!=0){
           cout<<a%b<<endl;
        }

     }

}
