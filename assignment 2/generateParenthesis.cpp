#include<iostream>
#include<stdio.h>
using namespace std;

void generate(int pos, int open, int close, int n){
	static char str[100];
	if(close==n){
		cout<<str<<"\n";
		return;
	}
	else
    { 	if(open < n) 
        { 
        str[pos] = '{'; 
        generate(pos+1,open+1, close, n); 
        } 
    
        if(open > close)  
        { 
            str[pos] = '}'; 
            generate(pos+1, open, close+1,n); 
        } 
          
    } 
}

int main(){
	int  n=3;
	generate(0,0,0,n);
	return 0;
}
