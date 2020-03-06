#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // Print star at corresponding
            // places satisfying the two conditions
            if((i == j) || (i + j == n-1))
                cout<<"* ";
            // Print blank space at rest of places
            else
                cout<<"  ";
        }

        cout<<endl;
    }
    return 0;
}
