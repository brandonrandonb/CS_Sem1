// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here


	while(true){
		for(int i=1; i<=10; i++){
		gotoxy(3,5+i);
		sleep(0);
		cout<<"*"<<endl;
		gotoxy(3,5+i);
		sleep(1);
		cout<<" "<<endl;
		if(i==10){
			break;
		}
		}
	}
	

}