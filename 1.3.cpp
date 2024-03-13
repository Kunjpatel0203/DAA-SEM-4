#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char Sour, char Aux, char Des)
{
    if (n == 1) 
    {    
        return;
    }
    TOH(n - 1, Sour, Des, Aux);
    cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
    TOH(n - 1, Aux, Sour, Des);
}

int main()
{
    int n;
    cout << "Enter no. of disks:";
    cin >> n;
    clock_t t = clock();
    TOH(n, 'A', 'B', 'C');
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl << "Time taken by algoridhm is :" << time_taken << endl;
    return 0;
}
