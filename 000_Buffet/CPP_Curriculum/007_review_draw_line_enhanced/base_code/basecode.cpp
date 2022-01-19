// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x=0;
	int y;
	char a='a';
	int b;
	int c;
	
	cout<<"give me a symbol"<<endl;
	cin>>a;
	cout<<"how long do you want the line"<<endl;
	cin>>x;
	cout<<"enter the x coordinate"<<endl;
	cin>>b;
	cout<<"enter the y coordinate"<<endl;
	cin>>c;
	//code
		for(int y=0; y<x; y++){
			gotoxy(b+y,c);
			{cout<<a;}
		}
	}




