#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100      // Defines maximum size of array

int main()
{
    int arr[MAX_SIZE];
    int size, i;

    /* Input size of array */
    cin>>size;

    /* Input array elements */
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /*
     * Print array in reversed order
     */
    for(i = size-1; i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
