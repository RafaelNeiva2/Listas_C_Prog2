int main(){
  int n, termo1 = 1, termo2 = 1, termon;
  printf("Digite a quantidade de termos que você deseja:\n");
  scanf("%d", &n);
  printf("%d %d", termo1, termo2);
  for(int i = 3; i <= n; i++){
    termon = termo1 + termo2;
    printf(" %d", termon);
    termo1 = termo2;
    termo2 = termon;
  }
}
