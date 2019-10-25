#include <stdio.h>
void main(){
char name[30];
int n;
 printf("Digite uma frase com pelo menos dois espaços em branco (espaco):\n ");
gets(name);
 printf("Sua frase sem os espacos em branco fica assim:\n ");
for (n=0;name[n] != '\0';n++) {
if(name[n]!=' '){//espaço em branco
 printf("%c",name[n]);
    }
  }
}
