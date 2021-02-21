#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> vec;
	int n;
	while(cin>>n){
		vec.push_back(n);
	}
	for(int v: boost::adapters::reverse(vec))
	cout<<v<<" ";
}
