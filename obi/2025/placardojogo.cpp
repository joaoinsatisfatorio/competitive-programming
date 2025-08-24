#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Evento {
    int m, p;

    bool operator < (const Evento& e) const {
        return m < e.m;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin >> p;

    vector<Evento> eventos;

    for(int i = 1; i <= p; i++){
        int x;
        cin >> x;
        Evento e;
        e.m = x;
        e.p = 1;
        eventos.push_back(e);
    }

    int m;
    cin >> m;

    for(int i = 1; i <= m; i++){
        int x;
        cin >> x;
        Evento e;
        e.m = x;
        e.p = 0;
        eventos.push_back(e);
    }

    sort(eventos.begin(), eventos.end());

    cout << 0 << " " << 0 << endl;

    int paulo = 0;
    int maria = 0;

    for(Evento e : eventos){
        if(e.p == 1) paulo++;
        else maria++;
        cout << paulo << " " << maria << endl;
    }

    return 0;
}