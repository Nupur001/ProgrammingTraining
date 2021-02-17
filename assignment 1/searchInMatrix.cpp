#include<iostream>
using namespace std;

int search(int mat[4][4], int n,int x){
	if (n==0)
	return -1;
	int smallest=mat[0][0],largest=mat[n-1][n-1];
	if(x<smallest|| x>largest)
		return -1;
	//for top right element index will be-
	int i =0 , j=n-1;
	while (i<n && j>0){
		// if it is same, print it idiot, that's the answer
		if (mat[i][j] == x) 
        {
            cout << "n Found at "<< i << ", " << j;
            return 1;
        }
        //if the matrix element is greater, the entire column is greater, so skip it 
        else if (mat[i][j]>x){
        	j--;
		}
		//if the matrix element is greater, the entire row is greater, so skip it 
		else if (mat[i][j]<x){
			i++;
		}
	}
}

int main(){
	int mat[4][4]={{ 10, 20, 30, 40 },
            	{ 15, 25, 35, 45 },
                { 27, 29, 37, 48 },
                { 32, 33, 39, 50 } };
    search(mat,4,37);
    return 0;
}
