#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1;
    cin>>n;
    string c[n];

    for(i=0;i<n;i++){
        cin>>c[i];
    }


    for(i=0;i<n-1;i++){
        if(c[i]!=c[i+1]){
            count++;

        }
    }

    cout<<count;

}
