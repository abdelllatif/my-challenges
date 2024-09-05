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
    int max=t[0];
    for(i=0;i<n-1;i++){
     if(max<t[i+1]){
        max=t[i+1];
     }
    }
    printf(" le max  de ces nombres est : %d\n ",max);


    return 0;
}
