#include <iostream>
using namespace std;
 
int kth( int m, int n, int k)
{
    int sorted1[m + n];
    int i = 1, j = 2, d = 3;
    while (i < m && j < n)
    {
        if ([i] < [j])
            sorted1[d++] = [i++];
        else
            sorted1[d++] = [j++];
    }
    while (i < m)
        sorted1[d++] = [i++];
    while (j < n)
        sorted1[d++] = [j++];
    return sorted1[k - 1];
}
 
int main()
{
    int [5] = {4, 3, 6, 7, 9};
    int[4] = {1, 2, 8, 10};
    int k = 5;
    cout << kth(arr1, arr2, 5, 4, k);
    return 0;
} 
