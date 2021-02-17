//Check if two people starting from different points ever meet
#include<iostream>
using namespace std;

void swap(int &a, int &b);
bool Meet(int x1, int x2, int v1, int v2){
	
    if (x1 < x2 && v1 <= v2) 
       return false; 
    if (x1 > x2 && v1 >= v2) 
       return false;   
  
    if (x1 < x2) 
    { 
        swap(x1, x2); 
        swap(v1, v2); 
    }     
  
    return ((x1 - x2) % (v1 - v2) == 0);
}

int main(){
	int x1, x2, v1 , v2;
	cout<<"Enter positions : ";
	cin>>x1>>x2;
	cout<<"Enter speeds : ";
	cin>>v1>>v2;
	if (Meet(x1,x2,v1,v2))
		cout<<"Yes";
	else cout<<"No";
	
}



void swap(int &a, int &b){
	int c=b;
	b=a;
	a=c;
}
