

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("bienvenue, saisir la taille du tableau s.v.p:\n");
    scanf("%d",&n);
    int t[n];
    int p[n],comp=0;
    for(i=0;i<n;i++){
        printf("entrer le nombre %d: ",i+1);
        scanf("%d",&t[i]);
    }
     for(i=0;i<n;i++){
      if(t[i]%2!=0) {
          p[comp]=t[i];
          comp++;
      }
      }
      printf("lelement pair sont\n");
    for(i=0;i<comp;i++){
       printf("%d\t",p[i]);
    }

 return 0;
}
