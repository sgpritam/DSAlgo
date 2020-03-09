 #include <bits/stdc++.h> 
using namespace std; 

int contain(int *arr,int i,int n,int key){

    //base case
    if(i>=n){
        return 0;
    }

    if(arr[i] == key){
        return 1;
    }

    return contain(arr,i+1,n,key);

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
    
	if(contain(arr,0,n,key)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
	return 0; 
} 