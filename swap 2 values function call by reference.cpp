#include<iostream>
using namespace std ;

void swap (int & a , int & b ) {
	int temp = a;
	a=b;
	b=temp ;
  }
  
  int main () {
  	
  	int x,y;
  	
  	cout<<"enter the value of x :" ;
  	cin>>x;
  	cout<<"enter the value of y :" ;
  	cin>>y;
  	
  	cout<<"\n before swapping : \n ";
  	cout<<"x= "<<x<< " y=" <<y<<endl;
  	
  	swap(x,y) ;
  	
  	cout<<"\n after swapping: \n" ;
  	cout<<"x= " <<x<< " y="<<y<<endl;
  	
  	return 0;
  }
