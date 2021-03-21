#include<iostream>
using namespace std;
class Maxmin
{
	private:
			int arr[100];
			int size;
	public:
			void input()
			{
				cout<<"\n Enter the size of an array:";
				cin>>size;
				cout<<"\n Enter the elements of an array:";
			}
			void findMaxminnum();
};
void Maxmin::findMaxminnum()
{
	int i,max,min;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"\n Max Number= "<<max;
	cout<<"\n Min Number= "<<min;
}
int main()
{
	Maxmin mn;
	mn.input();
	mn.findMaxminnum();
	return 0;
}
