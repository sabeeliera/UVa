#include <bits/stdc++.h>
using namespace std;
const double PI = 2.0 * acos(0);
int main(int argc, char *argv[])
{
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
    int n;
    double T, ri, ti;
    
    while (cin >> n >> T)
    {
        double x = 0.0, y = 0.0;
        for (int i = 0; i < n; i++)
        {
            cin >> ri >> ti;

            double a = 2.0 * PI * (T / ti);
            double x1 = ri * cos(a);
            double y1 = ri * sin(a);

            double d = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
            if (i) cout << ' ';
            cout << fixed << setprecision(4) << d;
            
            x -= x1, y -= y1;
        }
        cout << '\n';
    }
    return 0;
}
