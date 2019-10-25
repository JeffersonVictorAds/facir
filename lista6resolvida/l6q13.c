#include <stdio.h>
void main(){
int n, m=0;
char name[100];
printf("digite um frase: ");
gets(name);
for(n=0; name[n]!='\0'; n++){
if(name[n]==' '){//espaço em branco
m++;
}
}
printf("sua frase tem %d espacos em branco\n", m);
}
