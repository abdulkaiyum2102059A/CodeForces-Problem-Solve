#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    int sum = a+b;
    int e1,e2;

    for(int i=0;i<sum;i++){
        for(int j=0;j<sum;j++){
              e1 = pow(i,2)+j;
              e2 = pow(j,2)+i;
            if(e1==a&&e2==b){
                count++;
            }
        }
    }
    cout<<count<<endl;
}

