#include <iostream> 
using namespace std; 
  
int numberOfPaths(int m, int n) 
{ 
    // We've to calculate m+n-2 C n-1 here 
    // which will be (m+n-2)! / (n-1)! (m-1)! 
    int path = 1; 
    for (int i = n; i < (m + n - 1); i++) { 
        path *= i; 
        path /= (i - n + 1); 
    } 
    return path; 
} 
  
int main() 
{ 
    cout << numberOfPaths(3, 3); 
    return 0; 
} 
