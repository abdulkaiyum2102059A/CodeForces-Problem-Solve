#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
string s;

for(int i=0;i<n;i++){
    cin>>s[i];
}
int count =0;
sort(s.begin(),s.end());
for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
}
if(count==26){
    cout<<"YES";
}else{
  cout<<"NO";
}
}
