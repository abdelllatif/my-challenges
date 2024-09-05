// Online C compiler to run C program online

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
    int cherche,comp=0;
    printf("entrer lelement que vous voulez cherchE: ");
    scanf("%d",&comp);
    for(i=0;i<n-1;i++){
    if (t[i]==cherche){
    comp++;
    }
    }
    if(!comp)
    printf("lelement existe\t");
    else
    printf("lelement ne existe pas \t");
    return 0;
}
