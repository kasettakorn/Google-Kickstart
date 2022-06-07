#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

void solve(int c)
{

    lli n;
    cin >> n;
    bool isLower = false, isUpper = false, isDigit = false, isSpecial = false;
    string str;
    cin >> str;
    string newpass = str;

    for(lli i=0; i<str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') isLower = true;
        if (str[i] >= 'A' && str[i] <= 'Z') isUpper = true;
        if (str[i] >= '0' && str[i] <= '9') isDigit = true;
        if (str[i] == '#' || str[i] == '@' || str[i] == '*' || str[i] == '&') isSpecial = true;
    }

    if (!isLower) newpass += 'a';
    if (!isUpper) newpass += 'A';
    if (!isDigit) newpass += '0';
    if (!isSpecial) newpass += '#';

    while (newpass.size() < 7) newpass += '1';


    cout << "Case #" << c << ": " << newpass << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }


}
