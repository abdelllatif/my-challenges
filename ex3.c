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
    int sum=0;
    for(i=0;i<n;i++){
     sum=sum+t[i];
    }
    printf(" la somme de ces nombres est : %d\n ",sum);


    return 0;
}
