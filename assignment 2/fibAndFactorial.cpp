//Find fibonacci and factrorial

#include<iostream>
using namespace std;
int factorial(int n){
	if(n==1)
	return 1;
	return n*factorial(n-1);
}

int fibonacci(int n){
	if(n<=1)
	return n;
	return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int n=5;
	cout<<factorial(n);
	cout<<"\n"<<fibonacci(n);
}
