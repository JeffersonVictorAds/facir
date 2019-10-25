#include <stdio.h>
void main (){
int n,m,x,o,,l,;
    printf ("digite a primeira palavra: ");
char n1[30];
gets (n1);
printf ("digite a segunda palavra: ");
char n2[30];
gets (n2);

for(x=0;n1[x]!='\0';x++){
        n=("%d",n1[x]);
        m+=n;
}
for(x=0;n2[x]!='\0';x++){
        o=("%d",n2[x]);
        l+=o;
}
if (m>l){
printf ("a primeira palavra e maior");
}else{
if (m<l){
printf ("a segunda palavra e maior");
}else{

}
}
}
