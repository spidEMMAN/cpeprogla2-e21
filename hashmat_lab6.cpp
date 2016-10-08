#include<iostream>
#include<fstream>
#include<math.h>
#include<unistd.h>
using namespace std;
void dot()
{

	int j = 300000;
    for (int i = 0; i < 20; i ++) {
        usleep(j); 
        j = (j * 1.0); 
        
        cout<<". "; 
    }
}
 int main() 
 {
 ifstream emman("punyeta.txt");
 	int super1,super2,super3;	
 	
 	cout<< "HASHMAT WARRIORS BATTLE LOADING";
 	dot();
 	
 	cout<<endl<< "hashmat warriors battle result   "<<endl;
	while(emman>>super2>>super1){
	
	abs(super3=super1-super2);	
	cout << super2 << "       -      " << super1<< " =  ";
	cout<< super3<<endl;	
} 
}






