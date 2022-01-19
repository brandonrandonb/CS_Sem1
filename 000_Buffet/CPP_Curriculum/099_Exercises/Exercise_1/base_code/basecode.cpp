// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int x = 5;
	while(true){
		cout<<x<<endl;
		if(x==25){
			break;
		}
		x=x+1;
	}
	
	
	int y = 15;
	while(true){
		y=y-1;
		cout<<y<<endl;
		if(y==5){
			break;
		}
	for(int j =5; j<=25; j=j+1 ){
		cout<<j<<endl;
	}
	for(int i = 15; i>=5; i=i-1 ){
		cout<<i<<endl;
	}
	for(int h = 123; h<=200; h=h+2){
		cout<<h<<endl;
		
	}
	for(int k = 1253; k>=55; k=k-7){
		cout<<k<<endl;
	}
	}
}
