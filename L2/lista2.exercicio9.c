unsigned int inverte(unsigned int numero){
  unsigned int inverso = 0;
  while(numero > 0){
    inverso = inverso * 10 + numero % 10;
    numero /= 10;
  }
  return inverso;
}
int main(){
  unsigned int numero, inverso;
  printf("Digite um número positivo para ser invertido:\n");
  scanf("%u", &numero);

  inverso = inverte(numero);

  printf("O número invertido é: %u.", inverso);
}
