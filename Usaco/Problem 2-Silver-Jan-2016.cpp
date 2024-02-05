
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("div7.in","r",stdin);
    freopen("div7.out","w",stdout);
    int n,largestgroup = 0;
    cin >> n;
    int nearestgroup[7],prefix[n+1];
    for (int i = 0;i<=6;i++){
        nearestgroup[i] = -1;
    }
    prefix[0] = 0;
    nearestgroup[0] = 0;
    for (int i = 1;i<=n;i++){
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
        prefix[i] = prefix[i]%7;
        if (nearestgroup[prefix[i]] == -1){
            nearestgroup[prefix[i]] = i;
        }
        else{
            largestgroup = max(largestgroup,i-nearestgroup[prefix[i]]);
        }
    }
    cout << largestgroup;
    return 0;
}
