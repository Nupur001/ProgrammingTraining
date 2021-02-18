#include<iostream>
using namespace std;

void merge(int ar1[], int ar2[], int n1, int n2){
	int arr[n1+n2];
	int i=0,j=0,m=0;
	while(i<n1 && j<n2){
		if(ar2[j]>=ar1[i]){
			arr[m]=ar1[i];
			m++;
			i++;
			cout<<arr[m-1]<<" ";
		}
		else{
			arr[m]=ar2[j];
			m++;
			j++;
			cout<<arr[m-1]<<" ";	
		}
	}
	while(i<n1){
		arr[m]=ar1[i];
		m++;
		i++;
		cout<<arr[m-1]<<" ";		
	}
	while(j<n2){
		arr[m]=ar2[j];
			m++;
			j++;
			cout<<arr[m-1]<<" ";	
	}
	
}

int main(){
	int ar1[]={2,4,7,8,9};
	int ar2[]={1,3,4,5};
	int n1=sizeof(ar1)/sizeof(ar1[0]);
	int n2=sizeof(ar2)/sizeof(ar2[0]);
	merge(ar1,ar2,n1,n2);
}
