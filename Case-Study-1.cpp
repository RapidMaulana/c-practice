#include <stdio.h>
#include <string.h>

int main(){
    char string[100];

    scanf("%s", string);

    int len = strlen(string);

    for(int i = len - 1; i >= 0; i--){
        if(string[i] >= 97){
            printf("%c", string[i]-32);
        } else {
            printf("%c", string[i]+32);
        }
    }
    puts("");
}