//#include <stdio.h>
//int main(){
//	char text[20] ;
//	printf(" Nhap chuoi bat ki: ");
//	fgets(text, sizeof(text), stdin);
//	
//	int lenght = 0;
//	while(text[lenght] != '\0'){
//		lenght++;
//	}
//	
//	printf("\n Chuoi vua nhap: %s", text);
//	printf("\n Do dai chuoi: %d", lenght);
//	
//	return 0;
//}



#include <stdio.h>
#include <string.h>
int main(){
	char text[20] ;
	printf(" Nhap chuoi bat ki: ");
	gets(text);
	
	int lenght = strlen(text);
	
	printf("\n Chuoi vua nhap: %s", text);
	printf("\n Do dai chuoi: %d", lenght);
	
	return 0;
}

