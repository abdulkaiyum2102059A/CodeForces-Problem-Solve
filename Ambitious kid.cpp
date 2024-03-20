#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];


    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
       int operation = 1e12;
     for(int i=0; i<n; i++)
    {
       operation = min(operation,abs(a[i]));
    }
    cout<<operation;
}

