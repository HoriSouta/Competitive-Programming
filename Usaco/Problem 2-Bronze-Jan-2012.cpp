#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int prefix[n+1];
    for (int i = 0;i<=n;i++){
        prefix[i] = 0;
    }
    int k;
    cin >> k;
    for (int i = 1;i<=k;i++){
        int l,r;
        cin >> l >> r;
        prefix[l-1] += 1;
        prefix[r] -= 1;
    }
    int currentvalue = 0;
    for (int i = 0;i<n;i++){
        currentvalue += prefix[i];
        prefix[i] = currentvalue;
    }
    sort(prefix,prefix+n);
	cout << prefix[(n+1)/2-1];
    return 0;
}
