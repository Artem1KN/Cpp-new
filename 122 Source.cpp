#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");

    int n;
    fin >> n;

    int* ms = new int[n];
    int* ln = new int[n]();

    for (int i = 0; i < n; ++i)
        fin >> ms[i];

    int maxln = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i - 1; j >= 0; --j)
            if (ms[i] > ms[j] and ln[j] > ln[i])
                ln[i] = ln[j];
        ++ln[i];
        maxln = max(maxln, ln[i]);
    }
    fout << maxln;

    return 0;
}