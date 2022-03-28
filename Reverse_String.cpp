#include <bits/stdc++.h>

using namespace std;

void Reverse(string &str, int l, int h)
{
    if (l < h)
    {
        swap(str[l], str[h]);
        Reverse(str, l + 1, h - 1);
    }
}
int main()
{

    string s;
    cin >> s;
    Reverse(s, 0, s.length() - 1);
    cout << s;

}
