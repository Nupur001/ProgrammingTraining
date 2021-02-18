//Trapping rain water
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int findWater(int ar[],int n){
	int left[n], right[n];
	for(int i=0; i<n;i++){
		left[i]=*max_element(ar, ar + i+1);
	}
	cout<<"\n";
	for(int i=0; i<n;i++){
		right[i]=*max_element(ar+i, ar+n);
	}
	
	int water=0;
	for(int i=0; i<n;i++){
		water += min(left[i],right[i])-ar[i];
	}
	return water;
}

int main(){
	int ar[]={6,5,10,1,0,5,8};
	int n=sizeof(ar)/sizeof(ar[0]);
	cout<<findWater(ar, n);
}
