#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];



for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }
}

int sum =0;
int count = 0;
int j =0;
if(j<n){
while(sum<=4){
    sum += a[j];
    j++;
    if(sum>4)
        break;
}
count++;
}

cout<<count;

}
