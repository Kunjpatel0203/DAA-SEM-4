#include <bits/stdc++.h>
using namespace std;

int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1),
                   lcs(X, Y, m - 1, n));
}
int main()
{
    string S1 = "ILOVEDAA";
    string S2 = "ILOVECODE";
    int m = S1.size();
    int n = S2.size();
    clock_t t = clock();
    cout << "Length of LCS is " << lcs(S1, S2, m, n);
    t = clock() - t;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;
    return 0;
}