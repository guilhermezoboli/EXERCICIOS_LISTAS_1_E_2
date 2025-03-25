#include <stdio.h>
#include <stdlib.h>

int verificadivisibilidade (int x, int y){
    if((x%y)==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int x, y, verifica;

    printf("DIGITE DOIS NUMEROS:\n");
    scanf("%d %d", &x, &y);

    verifica = verificadivisibilidade(x, y);

    if(verifica == 1){
        printf("O NUMERO %d E DIVISIVEL POR %d\n", x, y);
        int divi = x/y;
        printf("A DIVISAO RESULTA EM: %d", divi);
    }else{
        printf("O NUMERO %d NAO E DIVISIVEL POR %d\n", x, y);
    }
}