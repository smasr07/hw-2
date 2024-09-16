#include <iostream>
using namespace std;
int main() {
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   if ( a == b && b == c && c == d) {cout << 3 << endl; return 0;}
   else if ( a == b == c ||  a == b  == d ||  b ==  c == d || c == d == a ) { cout << 2 << endl; return 0;}
   else if (( a == b && a != c && a != d) || ( a == c && a != b && a != d ) || ( a == d && a != c && a != b ) || ( b == a && b != c && b != d) || ( b == c && b != a && b != d ) || ( b == d && b != c && b != a ) || ( c == b && c != a && c != d) || ( c == a && c != b && c != d ) || ( c == d && c != a && c != b ) || ( d == b && d != c && d != a) || ( d == c && d != b && d != a ) || ( d == a && d != c && d != b )) { cout << 1 << endl; return 0;}
   else if ( a != b && b != c && c !=d ) { cout << 0 << endl; return 0;}
}
