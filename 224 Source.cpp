#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");

    int n;
    fin >> n;
    vector <int> arr(n);

    for (int i = 0; i < n; i++) {
        fin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long x, y;

    x = arr[n-1] * arr[n-2] * arr[n-3];
    y = arr[0] * arr[1] * arr[n-1];

    fout << max(x, y);

    return 0;
}