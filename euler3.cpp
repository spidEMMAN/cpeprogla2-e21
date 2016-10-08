#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream emman("input.txt");
	int super1;
	int y;
	while(emman>>super1)
	{
		for(int x=1;x<super1;x++)
		if(x%3==0 || x%5==0){
			y+=x;
		}
		
			
			cout<<y<<endl;	
	}
	system("pause");
}
