#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    int x, y, z;

    cout << "How many test cases are you running?" <<endl;
    cin >> T;

    cout << "Enter cat A's location, cat B's location, and mouse C's location respectively:" <<endl;
    cout << "(Between each test case, hit enter)" <<endl;

    for (int runs=1; runs<=T; runs++) {
        cin >> x >> y >> z;

        if (((x&&y&&z) >= 1) && ((x&&y&&z) <=100)) {
            if (abs(x-z)<abs(y-z)) {
                cout << "Cat A" << endl;
            }
            if (abs(x-z)>abs(y-z)) {
                cout << "Cat B" << endl;
            }
            if (abs(x-z)==abs(y-z)) {
                cout << "Mouse C" << endl;
            }
        }
    }
    return 0;
}
