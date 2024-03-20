#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,b=0,j=0;
    cin>>s;
    int a[s];

    for(int i=0;i<s;i++){
            cin>>a[i];

            if(a[i]%2!=0){
                b++;
            }

            else{
                j++;
            }
    }
    if(j>b){
        for(int i=0;i<s;i++){
        if(a[i]%2!=0){
            cout<<i+1;
            break;
            }

        }
    }
    else{
        for(int i=0;i<s;i++){
        if(a[i]%2==0){
            cout<<i+1;
            break;
            }

        }
    }


    }
