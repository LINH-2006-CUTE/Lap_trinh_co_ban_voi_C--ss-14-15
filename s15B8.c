#include<stdio.h>
#include <string.h>
int main(){
    char text[] = "hello world";
    printf("chuoi ban dau la: %s\n", text);
    for (int i = 0; i < strlen(text); i++){
        if (i == 0 || (text[i-1] == ' ' && text[i] != ' ')){
            if (text[i] >= 'a' && text[i] <= 'z'){
                text[i] = text[i] - 'a' + 'A';
            }
        }
    }

    printf("chuoi sau khi doi la: %s\n", text);
    return 0;
}

