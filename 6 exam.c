#include<stdio.h>
main(){
	
	int a; 
	int b;
	int c;
	int d;
	
	printf("Enter the number A:");
	scanf("%d",&a);
	
	printf("Enter the number B:");
	scanf("%d",&b);
	
	printf("Enter the number C:");
	scanf("%d",&c);
	
	printf("Enter the number D:");
	scanf("%d",&d);
	
	if(a<b){
		printf("b is max");
		
	}
	else if(a<c){
		printf("c is max");
	}
	else if(a<d){
		printf("d is max");
	}
	if(b<c){
		printf("c is max");
	
	}
	else if(b<d){
		printf("d is max");
	}
	if(c<d){
		printf("d is max");
		
	}
	else{
		printf("max");
		
	}

	
	
}
