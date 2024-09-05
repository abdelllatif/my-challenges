#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,i;
    printf("bienvenue, saisir la taille du tableau s.v.p:\n");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("entrer les elements du tableau:\n ",i+1);
        scanf("%d",&t[i]);
    }
    int val;
    for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
        if (t[i]>t[i+1]){
            val=t[i];
            t[i]=t[i+1];
            t[i+1]=val;
        }
    }
    }
        printf("le tableu est trier avec sucses\n");
        for(i=0;i<n;i++){
        printf("%d\t ",t[i]);
        }
    return 0;
}
