//#include <stdio.h>
//int main(){
//	char text[] = "Hello" ;
//	int count = 0;
//	
//	char ch ;
//	printf("Nhap 1 ki tu bat ki: ");
//	scanf(" %c", &ch);
//	
//	for ( int i =0; text[i] != '\0'; i++){
//		if ( ch == text[i] ) count++;
//	}
//	printf("Ki tu %c xuat hien %d lan trong chuoi!", ch, count);
//	
//	return 0;
//}




#include <stdio.h>
#include <string.h>
int main(){
	char text[] = "Hello" ;
	int lenght = strlen(text);
	int count = 0;
	
	char ch ;
	printf("Nhap 1 ki tu bat ki: ");
	scanf("%c", &ch);
	
	for ( int i =0; i< lenght; i++){
		if ( ch == text[i] ) count++;
	}
	printf("Ki tu %c xuat hien %d lan trong chuoi!", ch, count);
	
	return 0;
}
