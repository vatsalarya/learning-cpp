#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<"Enter no of cloumn\n";
	cin >>a;
	for (int i =0 ; i<=a ; i++)
	{
		for (int j=0 ; j<=i ; j++)
		{
			cout<<" ";
		}
		for (int k=a-i ; k>0 ; k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	//or//
	
	for (int p=1; p<=a ; p++)
	{
		int k=1;
		while (k!=p)
		{
			cout<<" ";
			k++;
		}
	
		
		for (int q=p ; q<=a ; q++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
