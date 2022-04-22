#include <iostream>

using namespace std;

int main() {
    int n, x, y, t = 0;
    cin >> n >> x >> y;

    if (x > y) {
        swap(x, y);
    }

    t += x;
    n--;

    int lf = 0;
    int rg = y * n;

    while (lf != rg) {
        int mid = (lf + rg) / 2;

        if (mid / x + mid / y < n) {
            lf = mid + 1;
        }
        else {
            rg = mid;
        }
    }

    t += lf;

    cout << t;

    return 0;
}