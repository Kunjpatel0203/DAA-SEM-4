#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int N = 10 ;
    int arr[N] ;
    for(int i=0 ; i<N ; i++)
    {
        arr[i] = i ;          
    }
    clock_t t = clock();
    insertionSort(arr, N);
    printArray(arr, N);
    t = clock() - t;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl<< "Time taken by algoridhm is :" << time_taken << endl;
    return 0;
}