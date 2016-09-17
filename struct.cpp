//despi
#include <iostream>
#include<unistd.h>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Item{
       int id[9];
      char name[20];
      int price[9];       
};
struct Date{
	int day;
	int month; 
	int year;
};
struct Order{
	Date date;
	Item item;
	int quantity;
};
struct Custom{
	Name name;
	int contact;
	Order order;
};


int main(){
	int itms[3];
    Custom custom[3];
    
    
    for (int w=0;w<3;w++){
	cout << "CUSTOMER INFORMATION " << w+1 << ":" << endl;
	if(w==1 || w==2)
	{
		cin.ignore();
	}
	cout << "FIRST NAME : ";
    gets(custom[w].name.firstName);
     cout << "LAST NAME: ";
    gets(custom[w].name.lastName);
    cout << "CONTACT NUMBER: ";
    cin>> custom[w].contact;
    cout << "ORDER DATE: "<<endl;
    cout << "DAY: ";
	cin >> custom[w].order.date.day;
	cout << " MONTH: ";
	cin>>custom[w].order.date.month;
	cout<< "YEAR: ";
	cin>>custom[w].order.date.year;
    cout << "ENTER 3 ITEMS; " << endl;
    for(int i=0; i<3; i++){
            
            cout << "ID: ";
			cin >> custom[w].order.item.id[i];
			cin.ignore();
			cout<< "NAME: ";
			gets(custom[w].order.item.name);
			cout<<"PRICE: ";
			cin>> custom[w].order.item.price[i];\
			cout<<"QUANTITY: ";
			cin>>custom[w].order.quantity;
			
			        
    }
    cout<<"****************************************\n***************************************"<< endl;
	}
		cout<< "SUMMARY REPORT: \n";
		cout<< "#" << "					CUSTOMER	NAME		ORDER DATE					ITEMS			PRICE				QUANTITY"<<endl;
		for (int w=0;w<3;w++){
		cout<< "1" << "					"<< custom[w].name.lastName<<"		"<<custom[w].order.date.day<<custom[w].order.date.month<<custom[w].order.date.year<<endl;
		
	
	
	
	
	system("pause");
}
  

