#include <iostream>

using namespace std;

int alts[100010];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> alts[i];

    int maxH = alts[n - 1], ans = 0;

    for(int i = n - 2; i >= 0; i--){
        if(alts[i] <= maxH){
            ans++;
        } else {
            maxH = alts[i];
        }
    }

    cout << ans << endl;

    return 0;
}