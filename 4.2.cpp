#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0;
    int *b = new int[h - l + 1];
    while (i <= mid && j <= h)
    {
        if (a[i] > a[j])
        {
            b[k++] = a[j++];
        }
        else
        {
            b[k++] = a[i++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= h)
    {
        b[k++] = a[j++];
    }

    for (int x = 0; x <= h - l; x++)
    {
        a[l + x] = b[x];
    }
    delete[] b;
}
void MergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        Merge(a, l, mid, h);
    }
}
main()
{
    int n = 100000 ;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i ;          
    }
    clock_t t = clock();
    MergeSort(a, 0, n-1);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    t = clock() - t;
    cout << endl;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl<< "Time taken by algoridhm is :"<< time_taken << endl;
    return 0;
}