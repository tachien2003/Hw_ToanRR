#include<iostream>
#include<math.h>

using namespace std;
void count_isPrime(int n)
{
   int count = 0;
   bool check = true;
   for(int i = 2; i < n; i++)
   { count ++;
     if (n % i == 0) continue;
     else check = false;
   }
   if (check) cout << n << " is Prime number" << endl;
   else cout << n << " is not Prime number" << endl;
   cout << "Count of " << n << ": " << count;
}
int main()
{
   int n;
   cin >> n;
   count_isPrime(n);
}

