#include<iostream>
using namespace std;
int main(){
	int loop=0;
	int input=0;
	int i=0;
	cout<<" \t\t Welcome to the prime number detector "<<endl;
	cout<<endl;
	cout<<"How many numbers do you want to check whether prime or not :";
	cin>>loop;
	for(i=1;i<=loop;i++){
	cout<<"For number "<<i<<endl;
	cout<<"Please enter a number to verify whether it is a prime number : ";
	cin>>input;
	 if (input==1){
		cout<<input<<" is not a prime number"<<endl;
	
	}
	else if(input==3){
		cout<<input<< " is a prime number"<<endl;
	}
	 else if(input== 2){
		cout<< input <<" is a prime number"<<endl;
	}
	
	 else  if(input%2 != 0){
	   	
	     	if(input%3 != 0){
		       	cout<<input <<" is  a prime number"<<endl;
            	}
            	else{
            		cout<<input<< " is not a prime number"<<endl;
				}
	}

   
    else{
    	cout<<input<<" is not a prime number"<<endl;
	}
	cout<<endl;
}

	return 0;
}

