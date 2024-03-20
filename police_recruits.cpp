#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int crime = 0;
    int police = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            police +=x;
        }else{
         if(police<1){

            ++crime;

         }else{
         --police;
         }
        }

    }

    cout<<crime;
}
