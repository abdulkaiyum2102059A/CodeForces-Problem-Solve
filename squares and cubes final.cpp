/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        int sqrt_limit = sqrt(n);

        for (int i = 1; i <= sqrt_limit; i++) {
            if (i * i <= n)
                count++;
            if (i * i * i <= n)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}*/
#include <iostream>
#include <cmath>
using namespace std;

// Function to count the numbers Polycarp likes
long long count_polycarp_likes(long long n) {
    long long count = 0;
    // Counting squares
    count += sqrt(n);
    // Counting cubes
    count += pow(n, 1.0/3.0);
    // Removing duplicates

    return count;
}

int main() {
    int t;
    cin >> t; // Reading the number of test cases

    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n; // Reading the value of n for each test case
        // Counting the numbers Polycarp likes for this value of n
        cout << count_polycarp_likes(n) << endl;
    }

    return 0;
}


