int main(){
  srand(time(NULL));
  int numeroSorteado = 0 + rand() % 100;
  int numeroEscolhido, contador = 0;
  do{
    printf("Tente adivinhar o numero (0-100) sorteado:\n");
    scanf("%d", &numeroEscolhido);
    contador += 1;
    if(numeroSorteado > numeroEscolhido){
      printf("O número é maior.\n");
    }else if(numeroSorteado < numeroEscolhido){
      printf("O número é menor.\n");
    }
  }while(numeroSorteado != numeroEscolhido);
  printf("Parabéns! Você acertou o número %d em %d tentativas!", numeroSorteado, contador);
}
