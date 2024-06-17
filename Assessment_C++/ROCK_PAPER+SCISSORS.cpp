#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
main(){
	
	string name;
	int rounds,r;
	int s_score=0;
	int c_score=0;
	int choice;
	srand(time(0));
	
	
	
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	cout<<"\n\n\t\t\tNAME";
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	
	cout<<"\n\n\n\t Enter Your Name: ";
	cin>>name;
	
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	cout<<"\n\n\t\t\tROUNDS";
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	
	cout<<"\n\n\n\t"<<name<<" How many rounds you want to play? :";
	cin>>rounds;
	
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	cout<<"\n\n\t\t\tGAME";
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	
	
	for(r=1;r<=rounds;r++)
	{
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	cout<<"\n\n\t Round No\t"<<r<<"/"<<rounds;
	
	cout<<"\n\n\t_*"<<name<<"'s score="<<s_score;
	cout<<"\n\n\t_*Computer's score="<<c_score;
	cout<<"\n\n\t*__*__*__*__*";
	cout<<"\n\n\t 1) ROCK";
	cout<<"\n\n\t 2) PAPER";
	cout<<"\n\n\t 3) SCISSOR";
	
	cout<<"\n\n\t Select Your Choice ";
	cin>>choice;
	
	int i=(rand()%3)+1;
	cout<<"\n\n\t Computer choice is ";
	cout<<i;
	
	if(choice==i){
		cout<<"\n\n\n\tDraw";
	}
	else if(choice==1 && i==2){
		cout<<"\n\n\n\tYou lose";
		c_score++;	
	}
	else if(choice==2 && i==3){
		cout<<"\n\n\n\tYou lose";
		c_score++;	
	}
	else if(choice==3 && i==1){
		cout<<"\n\n\n\tYou lose";
		c_score++;	
	}
	else if(choice==2 && i==1){
		cout<<"\n\n\n\tYou Win";
		s_score++;	
	}
	else if(choice==3 && i==2){
		cout<<"\n\n\n\tYou Win";	
		s_score++;
	}
	else if(choice==1 && i==3){
		cout<<"\n\n\n\tYou Win";	
		s_score++;
	}
	}
	cout<<"\n\n\t*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
	if(s_score==c_score){
		cout<<"\n\n\n\tGame is Drawn";
	}
	else if(s_score>c_score){
		cout<<"\n\n\n\tYou win";
	}
	else if(c_score>s_score){
		cout<<"\n\n\n\tComputer win";
	}
	
}