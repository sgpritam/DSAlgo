 #include <bits/stdc++.h> 
using namespace std; 

int firstIndex(int *arr,int i,int n,int key){

    //base case
    if(i>n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }
    
    return firstIndex(arr,i+1,n,key);

}
int main() 
{ 
	int arr[10005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	// Function call 
    int key;
    cin>>key;
    
	cout<<firstIndex(arr,0,n,key);
	
	return 0; 
} 
