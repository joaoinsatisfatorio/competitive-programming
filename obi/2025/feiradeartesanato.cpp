#include <iostream>
#include <set>
#include <vector>
#include <utility>

using namespace std;

struct Prod {
    int val, t;

    bool operator < (const Prod& p) const {
        if(val == p.val){
            return t < p.t;
        }
        return val < p.val;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<multiset<int>> prods(t + 1);
    multiset<Prod> allProds;

    vector<int> tips(n);
    for(int i = 0; i < n; i++){
        cin >> tips[i];
    }

    vector<int> prices(n);

    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    for(int i = 0; i < n; i++){
        int t = tips[i];
        int v = prices[i];
        prods[t].insert(v);
        allProds.insert({v, t});
    }

    int c;
    cin >> c;

    long long ans = 0;
    for(int i = 1; i <= c; i++){
        int x;
        cin >> x;

        if(!x){
            if(!allProds.empty()){
                auto it = allProds.begin();
                int t = it->t, val = it->val;
                ans += val;
                prods[t].erase(prods[t].find(val));
                allProds.erase(it);
            }
        } else {
            if(!prods[x].empty()){
                auto it = prods[x].begin();
                ans += *it;
                prods[x].erase(it);
                allProds.erase(allProds.find({*it, x}));
            }
        }
    }

    cout << ans << endl;

    return 0;
}