// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout <<"Happy Halloween" << endl;
	// variables defined
	int num1 = 0;
	int num2 = 0;
	char op = 'a';
	char quit = 'a';
	
	while(true){
	if(quit=='q'){
		break;
	}
	
	cout<<"Give me a number"<<endl;
	cin>>num1;
	cout<<"another number"<<endl;
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
	cout<<"would you like to quit? if so press q. if not put another number"<<endl;
	cin>>quit;
}

	
}
	
	
	
	

