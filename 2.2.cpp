#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int main(void)
{
    int n , x=1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }
    time_t t;
    t = clock();
    binarySearch(arr, 0, n - 1, x);
    t = clock() - t;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl << "Time taken by algoridham is : " << time_taken << endl;
    return 0;
}
