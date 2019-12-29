#include <iostream>

using namespace std;

int main()

{
		int a;
		cout<<"Enter the no of stars\n";
		cin>>a;
		
		for (int i=1 ; i<=a ; i++)
		{
			int k=1;
			while(k!=2*i)
			{
				cout<<" ";
				k++;
			}
			for (int j =1 ; j<=a-i ; j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	
}