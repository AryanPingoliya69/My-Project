#include<iostream>
using namespace std;

//Complex class
class complex{
private:
	int r,i;
public: 
	complex(int real,int img){
		r = real;
		i = img;
		
	}
	
	complex(){
		r = 0;
		i = 0;
	}
	
	//For Adding complex numbers 
	complex add(complex c1,complex c2){
		complex c3;
		c3.r = c1.r + c2.r;
		c3.i = c1.i + c2.i;
		
		return c3;
	}
	
	// For subtracting complex numbers
	complex sub(complex c1,complex c2){
		complex c3;
		c3.r = c1.r - c2.r;
		c3.i = c1.i - c2.i;
		
		return c3;
	}
	
	// For multiplication of complex numbers
	complex mult(complex c1,complex c2){
		complex c3;
		c3.r = c1.r * c2.r;
		c3.i = c1.i * c2.i;
		
		return c3;
	}
	
	void print(){
		cout<<"Complex no. is : "<<r<<" + i"<<i<<endl;
	}
	
};

int main(){
	complex c1(4,5);
	complex c2(1,2);
	complex c3;
	
	c3 = c3.add(c1,c2);
	c3.print();
	
	c3 = c3.sub(c1,c2);
	c3.print();
	
	c3 = c3.mult(c1,c2);
	c3.print();
	
	return 0;
}
