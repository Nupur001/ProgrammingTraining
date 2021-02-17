/*
Alternative Sorting
Difficulty Level : Easy
Given an array of integers,
print the array in such a way that the first element is first maximum
and second element is first minimum and so on.

Examples :

Input : arr[] = {7, 1, 2, 3, 4, 5, 6}
Output : 7 1 6 2 5 3 4

Input : arr[] = {1, 6, 9, 4, 3, 7, 8, 2}
Output : 9 1 8 2 7 3 6 4
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void altSort(int arr[],int n){
	sort(arr, arr+n);
	int i=0,j=n-1;
	while(i<j){
		cout<<arr[j]<<" "<<arr[i]<<" ";
		i++;
		j--;	
	}
}

int main(){
	int arr[]={7, 1, 2, 3, 4, 5, 6};
	int n= sizeof(arr)/sizeof(arr[0]);
	altSort(arr, n);
	return 0;
}
