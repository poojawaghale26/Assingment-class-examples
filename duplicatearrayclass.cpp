#include<iostream>
using namespace std;
class Duplicates
{
	private:
			int a[100];
			int size;
	public:
			void input()
			{
				cout<<"\n Enter the size of an array:";
				cin>>size;
				cout<<"\n Enter the elements of an array:";
			}
			void findDuplicate();
};
void Duplicates::findDuplicate()
{
	int i,j,k;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
	}
	cout<<"\n Duplicate Array:";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	Duplicates dp;
	dp.input();
	dp.findDuplicate();
	return 0;
}
