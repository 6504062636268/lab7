#include <stdio.h>
//prototype
int checkNumber(int n1, int n2);
int multiply(int n1, int n2);

int main() {
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	
	if(checkNumber(n1,n2))
	printf("%d\n",multiply(n1,n2));
	else{
		printf("Reject\n");
		return 0;
	}
}

//definition
int checkNumber(int n1, int n2){
	if(n1>20){
		if(n1<60){
			if(n2>20){
				if(n2<60){
				return 1;	
				}				
			}			
		}
	return 0;
	}
	else{
		return 0;
	}
}
int multiply(int n1, int n2){
	 return n1 * n2;
}
