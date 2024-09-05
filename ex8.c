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
    int v[n];
    for(i=0;i<n;i++){
    v[i]=t[i];
    }
    printf("le tebleau est copie");
    for(i=0;i<n;i++){
        printf("%d\t: ",v[i]);
}
    return 0;
}
