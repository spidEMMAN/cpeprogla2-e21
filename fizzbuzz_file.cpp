#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fizzbuzz("input.txt");
	int num;
	while(fizzbuzz>>num)
	{	
		if((num%3==0)&&(num%5==0))
		{
			cout<<"FizzBuzz"<< endl;
		}
		else if(num%5==0)
		{
			cout<<"Buzz"<< endl;
		}
		else if(num%3==0)
		{
			cout<<"Fizz"<< endl;
		}
		else
		{
			cout<<num<< endl;	
		}
	}
	return 0;
}
