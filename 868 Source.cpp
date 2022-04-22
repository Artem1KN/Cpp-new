#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");

    int n, m;
    fin >> n >> m;

    int** mtx = new int* [n];
    for (int i = 0; i < n; ++i) {
        mtx[i] = new int[m];
        for (int j = 0; j < m; ++j)
            fin >> mtx[i][j];
    }

    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mtx[j][i] < mtx[j][i + 1]) {
                for (int j = 0; j < n; j++) {
                    swap(mtx[j][i], mtx[j][i + 1]);
                }
            }
        }
    }


    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mtx[i][j] < mtx[i + 1][j]) {
                for (int j = 0; j < m; j++) {
                    swap(mtx[i][j], mtx[i + 1][j]);
                }
            }
        }
    }
    fout << mtx[n - 1][m - 1];
}
