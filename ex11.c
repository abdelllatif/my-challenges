

 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("bienvenue, saisir la taille du tableau s.v.p:\n");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("entrer le nombre %d: ",i+1);
        scanf("%d",&t[i]);
    }
    int cherche,comp,cont=0;
    printf("entrer lelement que vous voulez cherchE: ");
    scanf("%d",&cherche);
    for(i=0;i<n;i++){
    if (t[i]==cherche){
    t[i]=comp;
    printf("entrer le nouveu valeur");
    scanf("%d",&comp);
     cont++;
    }
    }
    if(!cont){
         printf("introuvable");
    }
else {
    printf("changer avec succes");
   for(i=0;i<n;i++){
       printf("%d\t",t[i]);
    }
}
 return 0;
}
