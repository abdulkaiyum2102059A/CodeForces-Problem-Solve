#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a[s];
    int count = 0;
    int c;
    for(int i=0;i<s;i++){
            cin>>a[i];
    }
     for(int k=0;k<s;k++){
            c = k;
            for(int j=0;j<s;j++){
                if((a[k]%2)!=(a[j]%2)){
                   count++;
                   if(count>2){
                    break;
                   }
                   }

            }
     }

     cout<<c+1;

     return 0;

}
