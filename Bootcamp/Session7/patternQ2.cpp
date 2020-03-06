#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int spaces=n-1;
    int count=1;
    int temp[n];
    for(int i=1; i<=n; i++){
        for(int space=1; space<=spaces; space++){
            cout<<' ';
        }

        temp[i-1]=count;

        for(int j=0; j<2*i-1; j++){
            cout<<count;
            count++;
        }
        spaces--;
        cout<<endl;
    }

    spaces=1;
    
    for(int i=n-1; i>=1; i--){
        count = temp[i-1];
        for(int space=1; space<=spaces; space++){
            cout<<' ';
        }

        for(int j=0; j<2*i-1; j++){
            cout<<count;
            count++;
        }
        spaces++;
        cout<<endl;
    }

}

