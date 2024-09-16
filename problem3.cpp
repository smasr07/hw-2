#include <iostream>
using namespace std;
int main() {
    char a;
    float b;
    cin >> a >> b;
    if ( a == 'M' && b < 1.70 ) { cout << "Short " << endl;}
    else if ( a == 'M' && 1.85 > b && b >= 1.70 ) { cout << "Normal "<< endl;}
    else if ( a == 'M' && b >= 1.85 ) { cout << "Tall " << endl;}
    if ( a == 'F' && b < 1.60 ) { cout << "Short " << endl;}
    else if ( a == 'F' && 1.75 > b && b >= 1.60 ) { cout << "Normal " << endl;}
    else if ( a == 'F' && b >= 1.75 ) { cout << "Tall " << endl;}
}
