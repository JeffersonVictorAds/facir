#include <stdio.h>
#include <string.h>
void main(){
int n;
char name[50];
printf("digite uma frase (sem usar letras maisculas): ");
gets(name);
for(n=0;n<strlen(name);n++){
if(name[n]>=97&&name[n]<=122)name[n]-=32;
}
printf("sua frase em letras masiculas fica assim: %s", name);
}
