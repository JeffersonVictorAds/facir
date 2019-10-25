#include <stdio.h>
void main(){
int n, m=0;
char name[30], l;

printf("Digite uma frase: ");
gets(name);
printf("escolha uma letra: ");
scanf("%c", &l);

for(n=0; name[n]!='\0'; n++){
if(name[n]=='e' || name[n]=='u' || name[n]=='a' || name[n]=='i' || name[n]=='o'){
name[n]=l;
m++;
}
}
printf("sua frase tem %d vogais.\n", m);
printf("%s",name );
}
