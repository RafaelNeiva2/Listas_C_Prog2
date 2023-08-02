#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * estado[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",
"PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};
typedef struct assalariados {
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado);
void relatorio(Assalariados *pessoas, int numAssalariados);
void imprime(Assalariados *pessoas, int numAssalariados);

main(void) {
    Assalariados **pessoas;
    int numAssalariados=3;
    pessoas = (Assalariados **) malloc (numAssalariados * sizeof(Assalariados));
    pessoas[0] = cadastra("Fulano de tal", 'M',45,1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M',50,2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M',42,500.00, "RS");
    imprime(pessoas, numAssalariados);
}

Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado){
    Assalariados pessoa;
    pessoa.nome[51] = nome;
    pessoa.sexo = sexo;
    pessoa.idade = idade;
    pessoa.salario = salario;
    pessoa.estado[3] = estado;
}


void imprime(Assalariados *pessoas, int numAssalariados){
    int i;
    for(i=0; i < numAssalariados; i++){
        printf(" %s\n", pessoas[i].nome);
        printf(" %c\n", pessoas[i].sexo);
        printf("%d\n", pessoas[i].idade);
        printf("%.2f\n", pessoas[i].salario);
        printf(" %s", pessoas[i].estado);

    }
}


void relatorio(Assalariados *pessoas, int numAssalariados) {
    int i = 0;
    int j = 0;
    for (i = 0; i = numAssalariados; i++) {
        if ((pessoas[i].idade > 40) && (pessoas[i].salario > 1000)) {
            i += 1;
        }
    }
    printf("%d", i);
}