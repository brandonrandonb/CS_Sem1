// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x;
	int y;
	char a;
	char b;
	int c;
	int d;

	
	//code
	cout<<"please enter box char"<<endl;
	cin>>a;
	cout<<"please enter box width"<<endl;
	cin>>x;
	cout<<"please enter box height"<<endl;
	cin>>y;
	cout<<"enter x coordinate"<<endl;
	cin>>c;
	cout<<"enter y coordinate"<<endl;
	cin>>d;
	
	
	//loops
	for(int t = 0; t < x; t++){
		for(int r = 0; r < y; r++){
			gotoxy(t+c,r+d);
			cout<<a;
		}
		cout<<endl;
	}
	for(int t = 0; t<y-2; t++){
		for(int r = 0; r<x-3; r++){
			gotoxy(t+1+c,r+1+d);
			cout<<" ";
		}
	}


}
