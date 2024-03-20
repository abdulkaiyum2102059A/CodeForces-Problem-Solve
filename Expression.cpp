#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int m1,m2,m3,m4,m5,s,s1,s2;
  cin>>a>>b>>c;


    m1 = a+b*c;
    m2 = a*(b+c);
    m3 = a*b*c;
    m4 = (a+b)*c;
    m5 = a+b+c;

    s = max(m1,m2);
    s1 = max(m3,m4);

    if(s>s1){
    s2 = s;
    }else{
     s2 = s1;
    }

    if(m5>s2){
        cout<<m5;
    }
    else{
        cout<<s2;
    }

}
