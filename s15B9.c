#include<stdio.h>
#include <string.h>
int main(){
    char text[] = "hello world";
    char deleteChar;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &deleteChar); 
    int i = 0, j = 0;
    while (text[i]){
        if (text[i] != deleteChar){ 
            text[j++] = text[i];  
        }
        i++;
    }
    text[j] = '\0';
    printf("chuoi sau khi xoa ky tu: %s\n", text); 

	return 0; 
} 
