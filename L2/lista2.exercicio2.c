int main(){
  int qtd, n = 1, soma = 0;
  printf("Digite a quantidade de números ímpares que deseja somar:\n");
  scanf("%d", &qtd);
  for(int i = 0;i < qtd; i++){
    soma = soma + n;
    n = n + 2;
  }
  printf("A soma entre os %d primeiros números ímpares é: %d!", qtd, soma);
}
