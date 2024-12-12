//#include <stdio.h>
//int main(){
//	char text[50] ;
//	printf("Nhap chuoi: ");
//	fgets(text, sizeof(text), stdin);
//	int count= 0;
//	for ( int i =0; i< 50; i++){
//		if ( text[i] == ' ' && text[i+1] != '\0' ); 
//		 count++;
//	}
//	
//	printf("\n Chuoi co %d tu!", count+1);
//	
//	return 0;
//}





#include <stdio.h>
#include <string.h>
int main(){
    char text[50];
    printf("Nhap chuoi: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int length = strlen(text);
    int count = 0;
    if (length > 0 && text[0] != ' '){
        count = 1;
    }

    for (int i = 1; i < length; i++) {
        if (text[i] == ' ' && text[i - 1] != ' '){
            count++;
        }
    }
    printf("\nChuoi co %d tu!\n", count);

    return 0;
}

