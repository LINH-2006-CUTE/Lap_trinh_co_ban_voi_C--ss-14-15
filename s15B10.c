#include<stdio.h>
#include <string.h>
int main(){
    char text[] = "linhxinh";
    for (int i = 0; i < strlen(text); i++) {
        int count = 0;
        for (int j = 0; j < strlen(text); j++) {
            if (text[i] == text[j]) {
                count++;
            }
        }
        if (count > 0) {
            printf("%c: %d\n", text[i], count);
            
                }
            }
        
return 0; 
} 
