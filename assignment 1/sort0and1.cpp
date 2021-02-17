#include<iostream>
using namespace std;

void swapem( int &a, int &b){
	int c=b;
	b=a;
	a=c;	
}

void sort0and1(int ar[],int n){
	int left=0, right=n-1;
	while(left<right){
		while(left<right){
			if(ar[left]==0)
				{
				left++;}
			else break;
		}
		cout<<"left is "<<left<<"\n";
		while(left<right){
			if(ar[right]==1){
				
				right--;}
			else break;
		}
		cout<<"right is "<<right<<"\n";
		
		swapem(ar[left],ar[right]);
	}
}

int main(){
	int ar[]={0,0,0,1,1,1,0,1};
	int n= sizeof(ar)/sizeof(ar[0]);
	sort0and1(ar,n);
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
	return 0;
}

