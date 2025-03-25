#include <stdio.h>
#include <stdlib.h>

void exibir(char *string, int n){
    for(int i = 0; i<n; i++){
        printf("%s\n", string);
    }
}
int main(){
    char string[10];
    int n;

    printf("DIGITE UMA PALAVRA:\n");
    scanf(" %[^\n]", &string);
    printf("DIGITE QUANTAS VEZES DESEJA EXIBIR A PALAVRA");
    scanf("%d", &n);

    exibir(string, n);
}