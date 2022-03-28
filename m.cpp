#include <bits/stdc++.h>
using namespace std;

char m(string s)
{
    if (s.length() == 1)
		return s[0];
    else if (s[s.length()] > s[s.length() - 1])
        return m(s.erase(s.length()));
    else
        return m(s.erase(s.length()-1));
}
int main()
{
    string s;
    cin >> s;
    cout << m(s);
    return 0;
}
