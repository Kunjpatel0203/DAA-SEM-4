#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int x=1 , n ;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
    clock_t t ;
    t = clock();
    search(a , n , x);
    t = clock() - t;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl << "Time taken by algoridhm is :" << time_taken << endl;
    return 0;
}