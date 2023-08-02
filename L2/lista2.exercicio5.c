int main(){
  int z, x, i, contador = 1;
  printf("Digite um valor para X e Z:\n");
  scanf("%d %d", &x, &z);
  while(z < x){
    printf("Digite outro valor para Z:\n\n");
    scanf("%d", &z);
  }
  i = x + 1;
  while(z >= x){
    x += i;
    i++;
    contador+=1;
  }
  printf("Serão necessários %d números inteiros para Z ultrapassar X.", contador);
  
}
