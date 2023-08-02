#include <stdio.h>
#include <stdlib.h>

typedef struct Livro {
int ano;
char titulo[100];
char autor[100];
int quantidade;
float preco;
} Livro;

typedef struct Biblioteca {
Livro **V;
int nLivros;
}Biblioteca;

// A-
Livro *fillLivro() {
Livro *livro = (Livro *)malloc(sizeof(Livro));

printf("Digite o ano do livro: ");
scanf("%d", &(livro->ano));
printf("Digite o título do livro: ");
scanf(" %[^\n]s", livro->titulo);
printf("Digite o autor do livro: ");
scanf(" %[^\n]s", livro->autor);
printf("Digite o número de exemplares do livro: ");
scanf("%d", &(livro->quantidade));
printf("Digite o preço do livro: ");
scanf("%f", &(livro->preco));

return livro;
}

// B-
Biblioteca *fillBiblioteca(int numLivros) {
Biblioteca *biblioteca = (Biblioteca *)malloc(sizeof(Biblioteca));
biblioteca->nLivros = numLivros;

biblioteca->V = (Livro **)malloc(numLivros * sizeof(Livro *));

for (int i = 0; i < numLivros; i++) {
printf("Preenchendo dados do livro %d:\n", i+1);
biblioteca->V[i] = fillLivro();
}

return biblioteca;
}

// C-
void valorBiblioteca(Biblioteca *b1, int numLivros) {
float total = 0;

for (int i = 0; i < numLivros; i++) {
total += (b1->V[i]->quantidade) * (b1->V[i]->preco);
}

    printf("Montante gasto para comprar todos os exemplares: R$ %.2f\n", total);
}

// D-
Livro *maiorBiblioteca(Biblioteca *b1, int numLivros) {
Livro *livroMaior = b1->V[0];

for (int i = 1; i < numLivros; i++) {
if (b1->V[i]->quantidade > livroMaior->quantidade) {
livroMaior = b1->V[i];
}
}

    return livroMaior;
}

int main() {
int numLivros;

printf("Digite o número de livros na biblioteca: ");
scanf("%d", &numLivros);

Biblioteca *biblioteca = fillBiblioteca(numLivros);

valorBiblioteca(biblioteca, numLivros);

Livro *livroMaior = maiorBiblioteca(biblioteca, numLivros);
printf("Livro com maior número de exemplares:\n");
printf("Ano: %d\n", livroMaior->ano);
printf("Título: %s\n", livroMaior->titulo);
printf("Autor: %s\n", livroMaior->autor);
printf("Número de exemplares: %d\n", livroMaior->quantidade);
printf("Preço: R$ %.2f\n", livroMaior->preco);


for (int i = 0; i < numLivros; i++) {
free(biblioteca->V[i]);
}
free(biblioteca->V);
free(biblioteca);

}
