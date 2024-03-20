#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,traveler=0,mini_traveler=0;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        traveler = traveler - a + b;
        if(traveler>mini_traveler){
            mini_traveler = traveler;
        }

    }
    cout<<mini_traveler;
}
