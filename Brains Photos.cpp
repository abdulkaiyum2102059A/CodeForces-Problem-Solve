#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;

    cin>>n>>l;
    char a[n][l];
    int count=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<l;j++){
             cin>>a[i][j];
    if(a[i][j]=='W'||a[i][j]=='B'||a[i][j]=='G'){
        count++;
    }
            }
    }
    if(count>0){
        cout<<"#Black&White";
    }else{
      cout<<"#Color";
    }
}
