#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int count = 0;
        int n;
        cin >> n;
        int x = n;

        while(n % 2 == 0) {
            n /= 2;
        }

        for(int i = 3; i * i <= x; i += 2) {
            if(n % i == 0) {
                count++;
                break; // Add break statement to exit loop once an odd divisor is found
            }
        }

        if(count > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

