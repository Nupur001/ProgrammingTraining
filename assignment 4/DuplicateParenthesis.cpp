#include <bits/stdc++.h> 
using namespace std; 
  

bool findDuplicateparenthesis(string str) 
{ 
    stack<char> Stack; 
	char ch;
    for (int i=0;i<str.length();i++) 
    { 
        ch=str[i];
        if (ch == ')') 
        {
            char top = Stack.top(); 
            Stack.pop(); 
  
            int elementsInside = 0; 
            while (top != '(') 
            { 
                elementsInside++; 
                top = Stack.top(); 
                Stack.pop(); 
            } 
            if(elementsInside < 1) { 
                return 1; 
            } 
        } 
  

        else
            Stack.push(ch); 
    } 
 
    return false; 
} 

int main() 
{ 
    string str = "(((a+(b))+(c+d)))"; 
  
    if (findDuplicateparenthesis(str)) 
        cout << "Duplicate Found "; 
    else
        cout << "No Duplicates Found "; 
  
    return 0; 
} 
