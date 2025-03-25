#include <stdio.h>
#include <stdlib.h>

int verificapar(int *num){
    if((*num%2)==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int num;

    printf("DIGITE UM NUMERO:\n");
    scanf("%d", &num);
    
    if(verificapar(&num)==0){
        printf("O NUMERO %d E PAR\n", num);
    }else{
        printf("O NUMERO %d E IMPAR\n", num);
    }

}