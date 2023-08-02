#include <stdio.h>
#include <string.h>

int saoIguais(char *palavraUm, char *palavraDois)
{
    if (strcmp(palavraUm, palavraDois) == 0){
        return 1;
    }
    return 0;
}

int subString(char *palavraUm, char *palavraDois)
{
    if (strstr(palavraUm, palavraDois) == NULL){
        return 1;
    }
    return 0;
}

int main()
{
  char palavraUm[81], palavraDois[81];

  printf("Digite a primeira palavra: ");
  scanf("%s", palavraUm);

  printf("Digite a segunda palavra: ");
  scanf("%s", palavraDois);

  if (saoIguais(palavraUm, palavraDois)){
    printf("Essas palavras sao iguais!\n");
  }
  else {
    printf("Essas palavras sao diferentes!\n");
  }
  if (subString(palavraUm, palavraDois)){
    printf("A palavra %s e uma substring da palavra %s.\n", palavraDois, palavraUm);
  }
  else {
    printf("A palavra %s nao e uma substring da palavra %s.\n", palavraDois, palavraUm);
  }
  return 0;
}

