#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct {
    string color;
    int d;
    int u;
}Fabric;

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
       int n;
        cin >> n;
        vector<pair<string, int>> f1;
        vector<pair<int, int>>f2;
        Fabric f;
        for (int i = 0; i < n; i++) {
            cin >> f.color >> f.d >> f.u;
            f1.push_back({f.color, f.u});
            f2.push_back({f.d, f.u});
        }
        
        sort(f1.begin(), f1.end());
        sort(f2.begin(), f2.end());
        int c=0;
        for (int i = 0; i < n; i++) {
            if (f1[i].second == f2[i].second) c++;
        }
        cout << "Case #" << t << ": " << c << endl;
    }
   
    return 0;
}
