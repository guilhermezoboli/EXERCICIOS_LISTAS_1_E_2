#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nomedisciplina[30];
    float media;
    float pfinal;
    float notafinal;
}Disciplina;

typedef struct aluno{
    char nomealuno[30];
    Disciplina disci[2]; 
}Aluno;

int receberdados(Aluno a[]){
    for(int i = 0;  i<2; i++){
        printf("DIGITE O NOME DO ALUNO %d\n", i+1);
        scanf(" %[^\n]", a[i].nomealuno);

        for(int j =0; j<2; j++){   

            printf("DIGITE O NOME DA DISCIPLINA %d:\n", j+1);
            scanf(" %[^\n]", a[i].disci[j].nomedisciplina);


            printf("DIGITE A MEDIA DO ALUNO ANTES DA PROVA FINAL:\n");
            scanf("%f", &a[i].disci[j].media);

            if(a[i].disci[j].media < 7){
                printf("DIGITE A NOTA DO ALUNO NA PROVA FINAL:\n");
                scanf("%f", &a[i].disci[j].pfinal);
            } else{
                a[i].disci[j].pfinal = -1;
            }

            if(a[i].disci[j].pfinal != -1){
                a[i].disci[j].notafinal = (a[i].disci[j].media + a[i].disci[j].pfinal)/2;
            } else{
                a[i].disci[j].notafinal = a[i].disci[j].media;
            }
        }
    }
    return 0;
}

int verificarreprovados(Aluno *a){
    printf("\n");
    printf("ALUNOS REPROVADOS:\n");
    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            if(a[i].disci[j].notafinal<7){
                printf("O ALUNO %s FICOU REPROVADO NA MATERIA %s, COM NOTA: %f\n", a[i].nomealuno,  a[i].disci[j].nomedisciplina, a[i].disci[j].notafinal);
            }
        }
    }
    return 0;
}

int exibirdados(Aluno a[]){
    for(int i = 0; i<2; i++){
        printf("\n>>>>>>ALUNO: %d<<<<<<< \n", i+1);
        printf("NOME ALUNO %d: %s\n", i+1, a[i].nomealuno);
        for(int j = 0; j<2; j++){
            printf("%d - DISCIPLINA %s\n", j+1, a[i].disci[j].nomedisciplina);
            printf("NOTA MEDIA: %.2f\n", a[i].disci[j].media);
            if(a[i].disci[j].pfinal != -1){
                printf("O ALUNO FICOU DE PROVA FINAL\n");
            }
            else{
                printf("O ALUNO NAO FICOU DE PROVA FINAL\n");
            }
            printf("NOTA FINAL: %.2f\n", a[i].disci[j].notafinal);
        }
    }
    printf("\n");
    return 0;
}

void lerdados(Aluno a[]){
    FILE *registros = fopen ("registros.txt", "r");
    if(registros == NULL){
        printf("ERRO AO ABRIR O ARQUIVO!\n");
        return;
    }
    for(int i=0; i<2; i++){
        fscanf(registros,"ALUNO: %[^\n]", a[i].nomealuno);
        for(int j = 0; j<2; j++){
            fscanf(registros, "DISCIPLINA: %[^,], MEDIA:%f, PROVA FINAL:%f, NOTA FINAL:%f\n", a[i].disci[j].nomedisciplina, a[i].disci[j].media, a[i].disci[j].pfinal, a[i].disci[j].notafinal);
        }
    }
    fclose(registros);
    printf("Registros lidos com sucesso de 'registros.txt'.\n");
}

void salvardados(Aluno a[2]){
    FILE *registros = fopen("registros.txt", "w+");

    if(registros == NULL){
        printf("ERRO AO ABRIR O ARQUIVO!\n");
        return;
    }

    for(int i = 0; i<2; i++){
        fprintf(registros, "ALUNO :%s\n", a[i].nomealuno);
        for(int j =0; j<2; j++){
            fprintf(registros, "DISCIPLINA: %s, MEDIA:%.2f, PROVA FINAL:%.2f, NOTA FINAL:%.2f\n", a[i].disci[j].nomedisciplina, a[i].disci[j].media, a[i].disci[j].pfinal, a[i].disci[j].notafinal);
        }
    }
    fclose(registros);
    printf("REGISTROS SALVOS COM SUCESSO\n");

}

int main(){
    Aluno a[2];

    //receberdados(a);
    //exibirdados(a);
    //verificarreprovados(a);
    //salvardados(a);
    lerdados(a);
}