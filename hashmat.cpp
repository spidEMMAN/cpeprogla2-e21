#include <iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	int sol[3][2];
	cout << "enter number of hashmat soldier and their enemy: " << endl;
	for(a=0;a<3;a++)
	{
		for (b=0;b<2;b++)
		{	
			cin >> sol[a][b];	
		}
	}
	if (a && b<=4294967296) 
	{
		cout << "the difference are : ";
	for(a=0;a<3;a++)
	{
		c=sol [a][1] - sol [a][0] ;
		cout << endl <<  c ;
		c=0;
	}
	cout << endl;
	}
	
	
	
	system ("pause");
	return 0;
	

}
