#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if ( a < 2147483647 && a > -2147483647 ) {
        cout << " YES " << endl;
    } else {cout << " NO " << endl;}
        return 0;
}
