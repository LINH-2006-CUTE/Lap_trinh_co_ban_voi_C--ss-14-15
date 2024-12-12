	#include<stdio.h>
	#include <string.h>
	int main (){
		char str[100];
	    printf("Nhap chuoi: ");
	    fgets(str, sizeof(str), stdin);
		int countText = 0;
	    int countNum= 0;
	    int countChar = 0;
	    int size = strlen(str); 
		for(int i=0; i<strlen(str);i++){
			if( isalpha(str[i])){
				countText++; 
				
			} else if( isdigit(str[i])) {
				countNum++; 
			} else {
				
				countChar++; 
			} 
			//if (str[i]>='0' &&str[i]<='9'){
			//	countNum ++; 
		//	} else if(str[i]>='a'&& str[i]<='z' || str[i]>='A' && str[i]<='Z'){
		//		countText++;
				
		//	} else{
				
		//		countChar++; 
		//	} 
			
		} 
		
		printf("so ki tu so la:%d \n",countNum);
		printf("so ki tu chu la:%d\n",countText);
	//	printf("so ki tu dac biet la:%d\n", countChar);
	printf(" so ki tu dac biet trong chuoi ban dau là:%d", size-countNum-countText); 
		
		
		return 0; 
	} 
	
	
	
	
	
	   
