#include <iostream>
using namespace std;

int main() 
{
  int n , sum = 0 ;
  
  // Input the value of n from the user
  cout<<"enter a positive enteger "<<endl;
  cin>>n;
  
  // Calculate the sum of natural numbers
  for (int i =1 ; i <=n ; i++) {
    sum +=i ;
  }
  
  // dDisplay the results
    cout << "the sum of natural numbers from 1 to " << n << " is " <<sum <<endl;
    return 0;
}
