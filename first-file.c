#include <stdio.h>
#include <stdlib.h>

int main(){
   int NB1 , NB2;
   char op;

printf("entez le nombre 1 :");
scanf("%d", & NB1);
printf("enterz l'operateur :");
scanf("%s", &op);
if (op == 'q')
{printf("le programme arreter !!!");
exit(0);
}
else
{
printf("entrez Nombre 2:");
scanf("%d", & NB2);
}
switch (op)
{
case '+' : printf("%d", NB1+NB2 );
 break;
case '-': printf("%d", NB1-NB2);
break;
case '*': printf("%d", NB1*NB2);
break;
case '/': if (NB2!=0)
 printf("%d", NB1/NB2);
 else{
 printf("le division par 0 est impossible"); 
   }
break;
default: printf("ce calcul n'existe pas\n");
    break;
}
}