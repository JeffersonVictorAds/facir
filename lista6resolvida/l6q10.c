#include <stdio.h>
int main(){
char name[20];
int n,m;
printf("digite um nome: ");
gets(name);
n=strlen(name);
printf("o nome ao contrario e: ");
for(m=n-1;m>=0;m--){
    printf("%c",name[m]);
}
}
