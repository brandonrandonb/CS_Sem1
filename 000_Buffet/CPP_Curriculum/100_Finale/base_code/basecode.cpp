// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
    cout<<"              "<<endl;
	cout<<"        "<<endl;
	cout<<"                          "<<endl;
	cout<<"       _=+#"<<endl;
	cout<<"      (# } |"<<endl;
	cout<<"     # { #/              "<<endl;
	cout<<"     \\ _&)               "<<endl;
	cout<<"    __|_|_____       "<<endl;
	cout<<"   /*   #   * \\       "<<endl;
	cout<<"  /__*___**____\\      "<<endl;
	cout<<"   |   _   _  |        "<<endl;
	cout<<"   |  | | |+| |        "<<endl;
	cout<<"   |  | |     |        "<<endl;
	cout<<"__##@=+**++==###@&==___"<<endl;
	cout<<"    Merry Christmas! "<<endl;
	cout<<"   Thank you Mr. Poole!"<<endl;
	
	

	int x = 1;
	
	while(true){
		for(int i=1; i<=10; i++){
		gotoxy(2,5+i);
		cout<<"*"<<endl;
		gotoxy(17,4+i);
		cout<<"*"<<endl;
		gotoxy(1,6+i);
		cout<<"*"<<endl;
		gotoxy(1,3+i);
		cout<<"*"<<endl;
		gotoxy(14,0+i);
		cout<<"*"<<endl;
		gotoxy(3,1+i);
		cout<<"*"<<endl;
		gotoxy(4,0+i);
		cout<<"*"<<endl;
		gotoxy(16,1+i);
		cout<<"*"<<endl;
		gotoxy(18,3+i);
		cout<<"*"<<endl;
		gotoxy(18,6+i);
		cout<<"*"<<endl;
		gotoxy(12,4+x);
		cout<<"*"<<endl;
		gotoxy(15,8+x);
		cout<<"*"<<endl;
		gotoxy(19,4+i);
		cout<<"*"<<endl;
		gotoxy(19,2+i);
		cout<<"*"<<endl;
		gotoxy(5,7+x);
		cout<<"*"<<endl;
		gotoxy(7,3+x);
		cout<<"*"<<endl;
		sleep(1);
		gotoxy(17,4+i);
		cout<<" "<<endl;
		gotoxy(2,5+i);
		cout<<" "<<endl;
		gotoxy(1,6+i);
		cout<<" "<<endl;
		gotoxy(1,3+i);
		cout<<" "<<endl;
		gotoxy(14,0+i);
		cout<<" "<<endl;
		gotoxy(3,1+i);
		cout<<" "<<endl;
		gotoxy(4,0+i);
		cout<<" "<<endl;
		gotoxy(16,1+i);
		cout<<" "<<endl;
		gotoxy(18,3+i);
		cout<<" "<<endl;
		gotoxy(18,6+i);
		cout<<" "<<endl;
		gotoxy(12,4+x);
		cout<<" "<<endl;
		gotoxy(15,8+x);
		cout<<" "<<endl;
		gotoxy(19,4+i);
		cout<<" "<<endl;
		gotoxy(19,2+i);
		cout<<" "<<endl;
		gotoxy(5,7+x);
		cout<<" "<<endl;
		gotoxy(7,3+x);
		cout<<" "<<endl;
	
		if(i==10){
			break;	
		}
		if(x<3){
			x++;
		}
		}
	
	}
	

	
}
