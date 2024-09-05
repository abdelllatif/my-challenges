

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
          comp=comp+t[i];
      }
      float moyenne=comp/n;
      printf("la moyenne est:\t");
       printf("%.2f\t",moyenne);

 return 0;
}
