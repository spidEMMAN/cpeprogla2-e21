#include <iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;
void newline(){
    char l;
    do{cin.get(l);}while(l!='\n'); 
}

void problem2(){
struct Student{
	int id[5];
	char fullName[30];
};

struct Quiz{
	float quizz[3];
};

int main;{
	Student stud[5];
	Quiz quiz[3];
	float total1=0,total2=0;
		
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "****STUDENT RECORDS****"<<endl;
    cout << "Enter student records: \n";
    for(int i=0; i<5; i++){
		cout<<"Student "<<i+1;
    	cout << "\nID: ";
		cin >> stud[i].id[i];
    	newline();
    	cout << "Name: ";
    	gets(stud[i].fullName);
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> quiz[i].quizz[j];
        }
        cout<<endl;
	}
	
	cout << setw(10) << "No."
	  	 << setw(15) << "Student No."
		 << setw(15) << "Name"
		 << setw(15) << "Grade"
		 << setw(16) << "Remark"
		 << endl;
	
	for(int q=0; q<5; q++){
		cout << setw(10) << q+1;
		
    	cout << setw(15) << q+1;
    	cout << setw(15)<< stud[q].fullName;
    	for(int w=0; w<3; w++){
    		
    	total1+=quiz[q].quizz[w];	
		}
		total2=total1/3;
		cout<<setw(17) << total2;
		if(total2<75){
			cout <<setw(17)<< "failed" << endl;
		}
		else{
			cout <<setw(17)<< "passed"<<endl;
		}
		
			total1=0;
		total2=0;
		
	}	
}
}

void problem1(){
	struct Student{
	int id;
	char name[30];
};

struct Quiz{
	double quiz;
	double average;
};

int main;{
	Student stud[1];
	Quiz qu[3];
	float total=0;
	int check;
	cout << "****STUDENT QUIZ****"<<endl;
    cout << "Enter student records: \n";
    for(int i=0; i<1; i++){
    	cout << "ID: ";
		cin >> stud[i].id;
    	newline();
    	cout << "Name: ";
    	cin.getline(stud[i].name,29);
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> qu[j].quiz;
            newline();
        }
	}
	
	cout<<"\n\nStudent record: ";
	for(int i=0; i<1; i++){
    	cout << "\nID: " << stud[i].id;
    	cout << "\nName: ";
    	puts(stud[i].name);
    	for(int j=0; j<3; j++){
			total+=qu[j].quiz;
        }
        cout << "Grade: "<< (total/3) << endl;		
		if((total/3)<75){
			cout<<"Remarks: Failed!\n";
		}
		else{
			cout<<"Remarks: Passed!\n";
		}
		cout<<endl;
		total=0;
	}
}
}

void problem3(){

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


int main;{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int itms[3];
    Custom custom[3];
    int x;
    double d=0;
    for (int w=0;w<3;w++){
    cout << "****COSTUMER PURCHASES****"<<endl;
	cout << "CUSTOMER INFORMATION " << w+1 << ":" << endl;
	cin.ignore();
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
}

int main(){
	problem1();
	problem2();
	problem3();
}
