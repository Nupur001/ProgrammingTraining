/*
K th Smallest/Largest Element in Unsorted Array
Difficulty Level : Medium
 
Given an array and a number k
where k is smaller than size of array,
we need to find the k’th smallest element in the given array.
 It is given that all array elements are distinct.

Examples:  

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 4 
Output: 10*/ 

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int KthSmallest(int arr[],int k, int n){
	sort(arr, arr+n);
	return arr[k-1];
 
}

int main(){
	int arr[] = {7, 10, 4, 3, 20, 15};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	cout<<KthSmallest(arr, k , n);
	return 0;
	}
