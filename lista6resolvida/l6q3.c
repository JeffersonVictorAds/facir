#include <stdio.h>
int main (){
    char name[20];
    printf ("digite um nome: ");
    gets (name);
       if (name[0]=='a'||name[0]=='A'){
    printf ("o nome começa com a ou A");
}else{
printf ("o nome não começa com a ou A");
}
}
