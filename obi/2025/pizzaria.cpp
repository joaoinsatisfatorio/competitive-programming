#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, p;
    cin >> g >> p;

    cout << (g * 8 + p * 4) - 2 << endl;

    return 0;
}