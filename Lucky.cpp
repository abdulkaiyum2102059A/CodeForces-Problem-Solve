#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    string c;

    for(int i=0;i<n;i++){

        cin>>c;

      if(c[0]+c[1]+c[2]==c[3]+c[4]+c[5]){
        cout<<"YES"<<"\n";
      }else{
        cout<<"NO"<<"\n";
      }
    }

}
