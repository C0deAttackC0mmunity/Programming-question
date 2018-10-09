#include <iostream> 
using namespace std; 
  bool Fun(long long int n) 
{ 
    long long int cube = n * n * n; 
  
    while (n > 0)  
    { 
        if (n % 10 != cube % 10) 
            return false; 
  
        n = n/10; 
        cube = cube/10; 
    } 
  
    return true; 
} 
int main() 
{ 
    long long int n;
    cin>>n;

    if(Fun(n))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
  
    return 0; 
} 
