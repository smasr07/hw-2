#include <iostream>
using namespace std;
int main() {
   int a, b, c;
   cin >> a >> b ;
   if (a == 1 ) { cout << "Bus " << endl; }
   else if ( a == 0 && b == 1 ) { cout << " Walk " << endl; }
   else if ( a == 0 && b == 0 ) { cout << "Bike " << endl; }
   return 0;
}
