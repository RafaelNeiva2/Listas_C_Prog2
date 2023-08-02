int main(){
  int x, y, n;
  printf("Digite o valor que deseja multiplicar e sua potencia:\n");
  scanf("%d %d", &x, &y);

  n = pow(x, y);
  printf("O resultado de %d elevado a %d é %d!", x, y, n);
}
