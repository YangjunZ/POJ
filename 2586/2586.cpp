#include<iostream>

using namespace std;

void systemPause(void)
{
    cin.sync();
    cout << "press any key to continue..." << endl;
    cin.get();
}

int main()
{

    long long  s, d;
    while (cin >> s >> d) {
        int xx = 0;
        int total_surplus = 0;
        while ( xx <= 5 && xx * d <= (5 - xx)*s ) xx++;
        if ( xx <= 3) {
            total_surplus = (12 - 2 * xx) * s - 2 * xx * d ;
        } else {
            total_surplus = (12 - (2 * xx + xx - 3)) * s - (2 * xx + xx - 3) * d;
        }
        if (total_surplus >= 0) {
            cout << total_surplus << endl;
        } else {
            cout << "Deficit" << endl;
        }
    }
    // systemPause();
    return 0;
}