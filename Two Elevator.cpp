#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;


        if((a-1)<(b+c)-1){
        cout<<"1"<<endl;
    }
    if((b+c)-1<(a-1)){
        cout<<"2"<<endl;
    }
    if((b+c)-1==(a-1)){
        cout<<"3"<<endl;
    }
    }

}



