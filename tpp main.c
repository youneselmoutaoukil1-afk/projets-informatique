#include <stdio.h>
  void lireTableau (int T[],int n){
    printf("entrer les %d entier :",n );
    for(int i=0 ; i < n;i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
  }
 void calculerETafficher(int T[],int n){
    int somme =0 ;
    float = moyanne =0.0;
    for(int i = 0 ;i<n;i++){
        somme +=T[i];

    }
    if(n> 0  ){
        moyanne = (float)somme /n;

    }
    printf("/n     Resultat      /n");
    printf("la somme est : %.2f /n ",moyanne);

}
int main() {
    int n;
    int T[100];
    printf("entrer la nombre d'element :");
    scanf("%d",&n);
    lireTabnleau(T , n);
    calculerETafficher(T,n)
    return 0;
}
