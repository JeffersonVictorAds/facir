  
#include <stdio.h>
int main(){
int n;
char name[30];
int l=0;
printf("digite seu numero: ");
gets(name);
for (n=0;name[n]!='\0';n++){
if(name[n]=='1'){
l++;
}
}
printf("Seu numero tem %d 1's",l);
}
