#include <bits/stdc++.h>
using namespace std;
int main() {

    // O(N) time & space -> naive solution
    // int n; cin>>n;
    // vector<bool> vis(n+1, false);

    // for (int i=0; i<n-1; ++i){
    //     int x; cin>>x;
    //     vis[x] = true;
    // }

    // for (int i=1; i<=n; ++i){
    //     if (vis[i] == false){
    //         cout << i << endl;
    //         return 0;
    //     }
    // }

    // another solution (more effiecient solution)
    long long n; cin>>n;
    long long sum = 0;
    for (int i=0;i <n-1; ++i){
        long long x; cin>>x;
        sum += x;
    }
    long long sum2 = n*(n+1)/2;
    cout << sum2 - sum << "\n";
}
