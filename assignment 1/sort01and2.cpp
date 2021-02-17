#include<iostream>
using namespace std;

void sort12(int arr[],int n){
	int low =0, mid =0, high=n-1;
	while(mid<=high){
		if(arr[mid]==0) 
            swap(arr[low++], arr[mid++]); 

  
        // If the element is 1 . 
        else if(arr[mid]==1) 
            mid++; 
         
        // If the element is 2 
        else if(arr[mid]==2) 

			swap(arr[mid], arr[high--]); 
        } 
	}

int main(){
	int arr[]={1,1,2,2,0,0,1,0};
	int n =sizeof(arr)/sizeof(arr[0]);
	sort12(arr,n);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
