#include<iostream>
using namespace std;

int findPeak(int arr[], int size,int low, int high){
	int mid= low+(high-low)/2;
	if (arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1])
		return mid;
	else if(arr[mid]<arr[mid+1])
		findPeak(arr,size,mid+1,high);
	else if(arr[mid]<arr[mid-1])
		findPeak(arr,size,low,mid-1);
	
}

int main(){
	int arr[]={1, 3, 3, 4, 1, 0 };
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Peak element is at index "<<findPeak(arr,size,0,size-1);
	return 0;
}
