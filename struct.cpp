#include <iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Item{
       int id[9];
      char name[20];
      double price[9];       
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
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int itms[3];
    Custom custom[3];
    int x;
    double d=0;
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
		cout<< "#" << setw(20)<<"COSTUMER NAME"<<setw(20)<<"ORDER DATE"<<setw(20)<<"ITEM"<<setw(20)<<"PRICE"<<setw(20)<<"QUANTITY"<<endl;
	for (int w=0;w<3;w++){
		cout<< w+1 <<setw(10)<< custom[w].name.lastName<<custom[w].name.firstName<<setw(25)<<custom[w].order.date.day<<"/"<<custom[w].order.date.month<<"/"<<custom[w].order.date.year<<endl;
	for(int i=0; i<3; i++){
		cout<<setw(55) <<custom[w].order.item.name<<setw(30)<<custom[w].order.item.price[i]<<setw(30)<<custom[w].order.quantity<<endl;
 		x=custom[w].order.item.price[i] * custom[w].order.quantity;
	 	d+=x;

	}
	cout <<setw(80)<< "TOTAL PRICE: "   << d << endl <<endl;
	d=0;
	x=0;
	}
	
	
	system("pause");
}
  
