// #include <stdio.h>
//int main() {
//    char text[50] ;
//	
//	printf("Nhap chuoi: ");
//	gets(text);
//    int count = 0;
//    for ( int i =0;i<50; i++){
//     
//    	if ( (text[i] >= 'a' && text[i] <= 'z')  ) ;
//		count++;
//	}
//	printf("Chuoi co %d ki tu la chu cai!", count);
//	
//    return 0;
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

    for (int i = 0; i< length; i++){
        if ((text[i] >= 'a' && text[i] <= 'z')||(text[i] >= 'A' && text[i] <= 'Z')){
            count++;
        }
    }
    printf("Chuoi co %d ki tu la chu cai!\n", count);

    return 0;
}

