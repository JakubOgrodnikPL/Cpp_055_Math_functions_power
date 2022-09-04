#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long long int x;
int y=4294967295;
int main()
{
    x=(pow(2,32)/2)-1;
    y=x+1;
    cout << setprecision(20);
    cout << "MAX: " << y << endl;
    cout << x << endl;
    cout << sizeof(x) << endl;
    return 0;
}
