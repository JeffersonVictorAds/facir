#include <stdio.h>
int main() {
char name[20];
int n;
 printf("digite uma frase: ");
gets(name);
 printf("sua frase sem as vogais: ");
for (n=0;name[n] != '\0';n++) {
if(name[n]!='u'&&name[n]!='a'&&name[n]!='e'&&name[n]!='i'&&name[n]!='o'){
 printf("%c",name[n]);
    }
  }
}
