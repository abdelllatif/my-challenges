#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
    printf("bienvenue, saisir la taille du tableau s.v.p:\n");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("entrer les elements du tableau:\n ",i+1);
        scanf("%d",&t[i]);
    }
    int val,result[n];
    printf("entrer le nombre que vous allez utiliser pour le facteur:\n");
    scanf("%d",&val);
    for(i=0;i<n;i++){
     result[i]=t[i]*val;
     }
     printf("tableau apres multiplication avec %d est\n  : ",val);
     for(i=0;i<n;i++){
     printf(" %d\t",result[i]);

     }
    return 0;}

