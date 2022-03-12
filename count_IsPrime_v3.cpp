#include<iostream>
#include<math.h>

using namespace std;

bool Is_Prime ( int n )
{
    for (int i = 2; i < n; i++ )
     if (n % i == 0)
      return false;
}
int main()
{   int count = 0;
    int n;
    bool check = true;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
      if (Is_Prime( i))
      {
        count ++;
        if (n % i == 0)
          check = false;
      }
    }
   if (check) cout << n << " is Prime number" << endl;
   else cout << n << " is not Prime number" << endl;
   cout << "Count of " << n << ": " << count;

}
