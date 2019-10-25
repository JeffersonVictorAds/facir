#include <stdio.h>
int main(){
int n;
char name[30];
printf("Digite um nome: ");
gets(name);
n=0;
while (name[n] != '\0') n++;
printf("Seu nome tem %d caracteres.",n);
}
