
#include <stdio.h>
void main(){
int idade;
char name[50],sexo;
printf("qual seu nome? ");
gets(name);
setbuf(stdin,NULL);
printf("qual sua idade? ");
scanf("%d",&idade);
setbuf(stdin,NULL);
printf("qual seu sexo?\ncaso feminino digite f caso maculino digite m: ");
scanf("%c",&sexo);
setbuf(stdin,NULL);

if(sexo == 'f' && idade<25){
    printf("%s aceita",name);
}else{
    printf("nao aceita");
    }
}
