#include <stdio.h>
#include <iostream>	
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){	
		int num[4][4];
		int num2[6][6];
		int num3[8][8];
		int i;
		int j;
		int l2points=0;
		int column=4;
		int row=4;
		int lives=5;
		int points=5;
		int choice[6][6];
		int choice2[4][4];
		int choice3[2][2];
		int x=0;
		int y=0;
		int z=0;
		string explosion="you blew yourself up -_-";
		cout<<"STAGE 1 APPROACHING......"<<endl;
		cout<<"choose a number but dont choose the bomb: "<<endl;
		cin>>choice[6][6];
		while(lives!=0&&points<40){
		for(i=0;i<6;i++){
			for(j=0;j<6;j++){
				i=1+rand()%6;
				j=1+rand()%6;
				if(num[i][j]==choice[6][6]){
						cout<<explosion<<endl;
						points=points-3;
						lives--;
						cout<<"lives: "<<lives<<endl;
						
				}
				else{
					cout<<"nice"<<endl;
					points=points+5;
					cout<<"Points: "<<points<<endl;
					cout<<"lives: "<<lives<<endl;
					cin>>choice[6][6];
				}
			}
		}
		}
		if(points>=40){
		cout<<endl;
		cout<<"Stage 1 completed!!"<<endl<<endl;
		cout<<"STAGE TWO APPROACHING........"<<endl;
		cout<<"choose a number but dont choose the bomb: "<<endl;
		cin>>choice2[4][4];
		while(points<190&&lives!=0){
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				i=1+rand()%4;
				j=1+rand()%4;
				if(num[i][j]==choice2[4][4]){
						cout<<explosion<<endl;
						points=points-6;
						lives=lives-2;
						cout<<"lives: "<<lives<<endl;
				}
				else{
					cout<<"nice!"<<endl;
					points=points+5;
					cout<<"Points: "<<points<<endl;
					cout<<"lives: "<<lives<<endl;
					cin>>choice2[4][4];
				}
			}
		}
		}
		}
		if(points>=190){
		cout<<endl;
		cout<<"Stage 2 completed!!"<<endl<<endl;
		cout<<"FINAL STAGE APPROACHING........"<<endl;
		cout<<"choose a number but dont choose the bomb: "<<endl;
		cin>>choice3[2][2];
		while(points<390&&lives!=0){
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				i=1+rand()%2;
				j=1+rand()%2;
				if(num[i][j]==choice3[2][2]){
						cout<<explosion<<endl;
						points=points-12;
						lives=lives-4;
						cout<<"lives: "<<lives<<endl;
						
				}
				else{
					cout<<"nice!"<<endl;
					points=points+10;
					cout<<"Points: "<<points<<endl;
					cout<<"lives: "<<lives<<endl;
					cin>>choice3[2][2];
				}
			}
		}
		}
		if(points>=390){
		    cout<<"You win! restart to play again."<<endl;
		    exit(1);
		}
		}
		if(lives==0){
		    cout<<"Good try"<<endl;
		    cout<<"Final score: "<<points<<endl;
		    return -1;
		}
		cout<<endl;
		

	
return 0;
}
			



