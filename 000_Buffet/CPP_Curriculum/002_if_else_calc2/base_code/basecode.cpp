// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// variables defined
	int num1 = 0;
	int num2 = 0;
	char op = 'a';
	
	// input
	cout<<"Give me a number"<<endl;
	cin>>num1;
	cout<<"another one"<<endl;
	cin>>num2;
	cout<<"enter a operation"<<endl;
	cin>>op;
	if(op== '+'){
		cout<<num1 + num2;
	}
	if(op== '-'){
		cout<<num1 - num2;
	}
	if(op== '/'){
		cout<<num1/num2;
	}
	if(op== '*'){
		cout<<num1*num2;
	}
}
	

