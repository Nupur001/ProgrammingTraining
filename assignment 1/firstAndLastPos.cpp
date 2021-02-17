#include<iostream>
using namespace std;

void searchFirst(int arr[],int n, int low, int high,int x){
	if(high>=low)
	{
	int mid =low + (high-low)/2;
	/* If mid element matches to it, in which case will we print mid-
	1.x>arr[mid-1] , mtlb mid k pehle koi x nhi
	2. mid==0, mtlb hum traverse krte krte 0 pe aagye 
	*/
	if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            cout<<mid;
    
    
    //If x>arr[mid], isse koi mtlb ni aage(mid+1, high) wale me check kro
	
    else if (x > arr[mid])
            searchFirst(arr,n, (mid + 1), high, x);
            
    /*Peeche(low, mid-1) wale part me kis cases me jainge
    1.Agr mid match to hojaye par mid-1 b match hojaye
    2. Agr mid bada ho x se
	*/        
    else
            searchFirst(arr,n, low, (mid - 1), x);
	}
}

void searchLast(int arr[],int n, int low, int high,int x)
{
	if(high>=low)
	{
	
	
	int mid= low+(high-low)/2;
	if ((mid == n-1 ||arr[mid + 1]>x) && arr[mid] == x)
            cout<<endl<<mid;
	else if (x < arr[mid])
			
            searchLast(arr,n,low, (mid - 1), x);
	else
            searchLast(arr,n, (mid + 1), high, x);	
	}	
}

int main(){
	int arr[]={1,3,4,4,5,5,5,5,27,123,124};
	int n = sizeof(arr)/sizeof(int);
	searchFirst(arr, n, 0, n-1, 5);
	searchLast(arr,n,0,n-1,5);
	return 0;
}
