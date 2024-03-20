#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int distance = 0,maximum=0;
        for(int i=0;i<n-1;i++)
        {
            distance = a[i+1]-a[i];
            maximum = max(distance,maximum);
        }
        int start =2*(a[0]-0);
        int end1 = 2*(x-a[n-1]);
        int se = max(start,end1);

        int final1 = max(se,maximum);
        cout<<final1;
    }
}
