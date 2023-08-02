int mdc(int x, int y){
  int resto, aux;
  if(x < y){
    aux = x;
    x = y;
    y = aux;
    
  }
  while (y > 0) {
    resto = x % y;
    x = y;
    y = resto;
  }

    return x;
}
int main(){
  int x, y, resultado;
  printf("Digite os valores de X e Y para achar o MDC:\n");
  scanf("%d %d", &x, &y);

  resultado = mdc(x, y);
  printf("O MDC entre %d e %d é %d!", x, y, resultado);
}
