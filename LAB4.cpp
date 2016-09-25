#include<iostream>
#include<string.h>
using namespace std;

char str1[100], str2[100], word[100];
char valid, *p1, *p2;
int length, check=0, result, options;

void scopy() {
	cout<<" COPY " << endl;
	
	cout<<"Enter first  string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<100;i++){
    	p1=&str1[i];
    	p2=&str2[i];
    	*p1=*p2;
    	cout<<str1[i];
	}  
}

void scompare() {
	cout<<"COMPARE " << endl;
	
	cout<<"Enter first string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	p1=&str1[i];
    	p2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*p1==*p2){
    		check+=0;
		}
		else if (*p2<*p1) {
			check+=1;	
		}
		else {
			check-=1;
		}
	}
	if (check==0) cout<<"Equal";
	else if (check>0) cout<<"Positive one ";
	else cout<<"Negative one ";	
	cout<<endl;
}

void scat() {
	cout<<"CONCATENATE" << endl;
//	gets(word);
	cout<<"Enter first  string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	p1=&str1[i];
    	cout<<*p1;
	}
	for(int i=0;i<strlen(str2);i++){
    	p2=&str2[i];
    	cout<<*p2;
	}
}

int slen(char*p1){
	cout<<"\nEnter a string:  ";
	
    gets(str1);
	while(*p1!='\0') {
		check++;
		p1++;
	}
	cout<<"The length of the string is: "<<check << endl;
	return check;
}

void srev() {
	int i=0;
    char*p1=word;
    char*p2=str1;
    cout<<" REVERSE " << endl;
	
	cout<<"Enter string: ";
    gets(word);
    while(*p1){
    	p1++;
    	i++;
	}
	while(i>=1){
		p1--;
		*p2=*p1;
		p2++;
		--i;
	}
	cout<<"The reverse string is: "<<str1<< endl;
}


main() {
	
	scopy();
		cout << endl;
	scompare();
		cout << endl;
	scat();
		cout << endl;
	slen(str1);
	cout << endl;
	srev();
	system("pause");
	
}

