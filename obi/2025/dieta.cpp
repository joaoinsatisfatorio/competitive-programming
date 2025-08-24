#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, maxCal;
    cin >> n >> maxCal;

    int cals = 0;
    for(int i = 1; i <= n; i++){
        int p, g, c;
        cin >> p >> g >> c;
        
        cals += (p * 4 + g * 9 + c * 4);
    }

    cout << maxCal - cals << endl;

    return 0;
}