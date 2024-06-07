#include<stdio.h>
main(){
	
	int q,amt1=0,amt2=0,amt3=0,amt4=0,amount=0;
	int choice;
	char c;
		
	
		do {
			
	printf("\n\n\t1.Pizza \t\tprice=180rs/pcs");
	printf("\n\n\t2.Burger\t\tprice=100rs/pcs");
	printf("\n\n\t3.Dosa  \t\tprice=120rs/pcs");
	printf("\n\n\t4.Idli  \t\tprice=50rs/pcs");	
					
		printf("\n\n\tPlease enter your choose");
		scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n\n\tYou have selected pizza");
			break;
		case 2:
			printf("\n\n\tYou have selected burger");
			break;
		case 3:
			printf("\n\n\tYou have selected Dosa");
			break;
		case 4:
			printf("\n\n\tYou have selected idli");
			break;
		default :
			printf("\n\n\tWrong choice");
			break;
		}
	printf("\n\n\tEnter quantity");
	scanf("%d",&q);
	 
	if(choice==1){
	
	amt1=q*180;
	printf("\n\n\tAmount:%d",amt1);
}
	else if (choice==2){
	
	amt2=q*100;
	printf("\n\n\tAmount:%d",amt2);
}
	else if (choice==3){
	
	amt3=q*120;
	printf("\n\n\tAmount:%d",amt3);
	}
	else if (choice==4){	
	amt4=q*50;
	printf("\n\n\tAmount:%d",amt4);
}
	amount=amt1+amt2+amt3+amt4;
	printf("\n\n\tTotal Amount is =%d",amount);
	
	
	printf("\n\n\tDo you want to place more order ? y or n");
	scanf(" %c",&c);
}
	while(c=='y');
		printf("\n\n\tYour total Amount is = %d",amount);
}