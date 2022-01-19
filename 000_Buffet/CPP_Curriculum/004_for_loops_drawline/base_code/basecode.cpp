// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// input
	char a = 'a';
	char b ;
	int y = 0;
	int x ;
	cout<<"give me a symbol"<<endl;
	cin>>a;
	cout<<"how long do you want line"<<endl;
	cin>>y;
	cout<<"do you want it to be horizontal (h) or vertical (v)"<<endl;
	cin>>b;
	// code
	if(b=='h'){
	for(x=0; x!=y; x++)
		{cout<<a;}
	}
	else if(b=='v'){
		for(x==0; x!=y; x++)
		{cout<<a<<endl;}
	}
}
