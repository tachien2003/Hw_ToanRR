#include <iostream>

using namespace std;
void GCD_a_b( int a, int b)
{   int r;
    int x = a;
    int y = b;
    while (b != 0)
    { cout << "GCD( "<< a << ", " << b << " )= " << endl ;
      r = a % b;
      a = b;
      b = r;
    }
    cout << "GCD(a,b): " << a << endl;
    cout << "LCM(a,b): " << x*y/a;
}

int main()
{   int a, b;
    cin >> a  >> b;
    GCD_a_b(a, b);

    return 0;
}
