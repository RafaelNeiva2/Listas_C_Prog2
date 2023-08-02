int main(){
  int n,i, contador = 0;
  printf("Digite o valor desejado:\n");
  scanf("%d", &n);
  for(i=2; i <= n/2; ++i){
    if(n%i==0){
      contador = 1;
      break;
      }  
    } 
  if(n == 1){
    printf("%d não é primo!", n);
    }
  else{
    if(contador == 0){
      printf("%d é primo!", n);
    }
    else{
      printf("%d não é primo.", n);
    }
  }
}
