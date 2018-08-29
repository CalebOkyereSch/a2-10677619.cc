#include <iostream>
#include <string>
using namespace std;
int main(){
	double sales, comission;
	double rate;
	rate=0.15;
	
	
	
	cout<<"\t\t\t Welcome To The West Hills Super Market Commission Calculator " <<endl;
	cout<<endl;
	cout<<"Please Enter How Much Sales You Made This Month (in cedies) : ";
	cin>>sales;
	comission=rate * sales;
	cout<<endl;
	cout<< "The Amount You Entered is GHC "<<sales<<endl;
	cout<<endl;
	cout<<"And The Commission You Have To Get Is :GHC "<<comission<<endl;
	cout<<endl;
	cout <<"Remaining GHC "<<sales-comission<<" To Be Given To The Manager "<<endl;
	
return 0;	
}
