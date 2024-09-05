

 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,j,i;
    printf("bienvenue, saisir la taille du tableau1 s.v.p:\n");
    scanf("%d",&n);
    int t[n];
    printf("bienvenue, saisir la taille du tableau2 s.v.p:\n");
      scanf("%d",&m);
   int p[m];
    for(i=0;i<n;i++) {
     printf("remplir tableau1 s.v.p:\n");
    scanf("%d",&t[i]);
    }
    for(i=0;i<m;i++) {
    printf("remplir tableau2 s.v.p:\n");
    scanf("%d",&p[i]);
    }

int u=n+m;
int fus[u];
    for(j=0;j<n;j++) {
      fus[j]=t[j];
    }
    for(j=0;j<m;j++) {
      fus[j+n]=p[j];
    }
printf("la fussion avec sucses\t");
for(i=0;i<u;i++) {
      printf("%d\t",fus[i]);
    }
 return 0;
}
