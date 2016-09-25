#include<iostream>
#include<cstring>
#include <cctype>

using namespace std;

void emman(){
	char xc[100];
char cx[100];
cout<<"enter first string : ";
gets(xc);
cout<<"enter second string : ";
gets(cx);
strcpy(xc,cx);
cout<< " new first string is : ";
puts(xc);
}
void despi(){
	char xy[100];
char yx[100];
cout<<"enter first string : ";
gets(xy);
cout<<"enter second string : ";
gets(yx);
strcat(xy,yx);
cout<< " new first string is : ";
puts(xy);
}

void desu(){
	char string1[100];
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: ";
    
    cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
	   }
	}
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
	
	
} 
void desuka(){
	char zy[100];

cout<<"enter string : ";
cin.ignore();
gets(zy);

for (int t=0;t<strlen(zy);t++)
{
	if(t==0){
	if(zy[t]>=97 && zy[t]<=122){
		zy[t]-=32;
	}

	}
	
	
	if(zy[t]==' '){
		zy[t+1]-=32;
	}
}
	puts(zy);
}
void desukadesu(){
	char word[100];
	int length;
	cout<<"Enter a phrase: ";
	gets(word);
	length=strlen(word);
	for(int i=length;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<length) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}




int main(){
cout << "STRING COPY " << endl;
emman();
cout << endl <<endl <<endl <<"*****************************************************************************"<<endl<<"*****************************************************************************"<<endl<<endl<<endl;
	cout << "STRING CONCATENATE " << endl;despi();
cout << endl <<endl <<endl <<"*****************************************************************************"<<endl<<"*****************************************************************************"<<endl<<endl<<endl;
	cout << "STRING PALINDOME " << endl;desu(); 
cout << endl <<endl <<endl <<"*****************************************************************************"<<endl<<"*****************************************************************************"<<endl<<endl<<endl;
	cout << "STRING CAPITAL " << endl;desuka();
cout << endl <<endl <<endl <<"*****************************************************************************"<<endl<<"*****************************************************************************"<<endl<<endl<<endl;
	cout << "STRING REVERSE VERTICAL " << endl; desukadesu(); cout << endl;
	system("pause");
}
