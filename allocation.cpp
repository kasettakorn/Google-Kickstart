#include <bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    cout << "Case #" << tc << ": ";
    //Code here
    int a, b;
    cin >> a >> b;
    int price[a];
    for(int i=0; i<a; i++) {
        cin >> price[i];
    }
    sort(price, price+a);
    int n=0;
    for(int i=0; i<a; i++) {
        if(price[i] <= b) {
            n++;
            b -= price[i];
        }
        else {
            break;
        }
    }
    cout << n << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for(int i=1; i<=T; i++) {
        solve(i);
    }
    return 0;
}
