// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x=0;
	int y;
	char a='a';
	char b;
	
	cout<<"give me a symbol"<<endl;
	cin>>a;
	cout<<"how long do you want the line"<<endl;
	cin>>x;
	cout<<"horizontal (h), vertical (v), or diagonal (d)?"<<endl;
	cin>>b;
	//code
	if(b=='h'){
		for(int y=0; y<=x; y++){
			gotoxy(6+y, 9);
			{cout<<a;}
		}
	}
	else if(b=='v'){
		for(int y=0; y<=x; y++){
			gotoxy(6,9+y);
			{cout<<a<<endl;}
		}
	}
	else if(b=='d')
	for(int y=0; y<=x; y++){
		gotoxy(6+y,9+y);
		{cout<<a;}
	}
}
