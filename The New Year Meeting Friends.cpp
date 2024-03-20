#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[3];
    cin>>s[0]>>s[1]>>s[2];
    sort(s,s+3);
    int sum = (s[1]-s[0])+(s[2]-s[1]);

    cout<<sum;
}
