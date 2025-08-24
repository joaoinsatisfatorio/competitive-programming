#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin >> p;

    for(int i = 1; i <= p; i++){
        long long l, a, b;
        cin >> l >> a >> b;

        long long low = 1, h = (b - a);

        long long ans = 1;
        while(low <= h){
            long long mid = low + (h - low) / 2;
            long long result = mid * (a + (a + (mid - 1))) / 2;

            if(result < l){
                ans = mid + 1;
                low = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}