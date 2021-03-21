#include<iostream>
using namespace std;
class Complex
{
	private :
		int real,imaginary,sum;
	public:
		void getdata();
		void putdata();
		void addition(Complex,Complex);
		void subtraction(Complex,Complex);
};

void Complex::getdata()
{
	
	cin>>real>>imaginary;
}

void Complex::putdata()
{
	cout<<real<< "+" <<imaginary<< "i"<<"\n";
}

void Complex::addition(Complex c1,Complex c2)
{
	real=c1.real+ c2.real;
	imaginary=c1.imaginary + c2.imaginary;
	
}

void Complex::subtraction(Complex c1,Complex c2)
{
	real=c1.real-c2.real;
	imaginary=c1.imaginary-c2.imaginary;
}

int main()
{
	Complex c1,c2,c3,c4;
	int ch;
	cout<<"\nEnter real and imaginary part of first complex number:";
	c1.getdata();
	cout<<"Enter real and imaginary part of second complex number:";
	c2.getdata();
	
	cout<<"\nfirst complex number is:";
	c1.putdata();
	cout<<"Second complex number is:";
	c2.putdata();
	
	cout<<"\nEnter your choice:"<<endl;
	cout<<"1-->Addition:"<<endl;
	cout<<"2-->Subtraction:"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			c3.addition(c1,c2);
			cout<<"\nAddition of complex number is:";
			c3.putdata();
			break;
			
		case 2:
			c4.subtraction(c1,c2);
			cout<<"Subtraction of complex number is:";
			c4.putdata();
			break;
	}
	
	return 0;
	
	
}

