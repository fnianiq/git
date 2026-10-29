#include<stdio.h>
int main(){
    char s[20];
    scanf("%s",&s);
    for(int i=0;s[i]!='\0';i++){
        putchar (s[i]);
        if(s[i+1]!='\0'){
            putchar ('o');
        }
    }
    putchar ('\n');
    return 0;
}
