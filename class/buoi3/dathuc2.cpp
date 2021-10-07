#include<iostream>
using namespace std;

class Dathuc2{
	
	private : 
		int a, b, c;
	public:
	  Dathuc2 (int a=1, int b=1, int c=1)
	  {
	  	this -> a = a;
	  	this -> b = b;
	  	this -> c = c;
	  }
	~ Dathuc2 () {
	}
	 void in()
	 {
	 	cout<< a<<"x^2";
	 	if(b>=0)
	 	    cout<<"+"<<b<<"x";
   		else	
   			cout<<b<<"x";
  		if(c>=0)
	 	    cout<<"+"<<c;
   		else	
   			cout<<c;	
	 }	
	 Dathuc2 Cong (Dathuc2 m)  //   + 
	 {
	 	Dathuc2 t;
	 	 t.a = this -> a + m.a;
	 	 t.b = this -> b + m.b;
	 	 t.c = this -> c + m.c;
	 	 return t;
	 }			
		
};

 main()
 {
 Dathuc2  x (3,-11,5), y (6,7,2);
 Dathuc2 tong;
 tong = x.Cong(y);
 tong.in();
}