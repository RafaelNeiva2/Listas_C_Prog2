int main(){
  int dupla1, dupla2, soma, multi, i = 1000;
  for (i; i <= 9999; i++){
    dupla1 = i / 100;
    dupla2 = i % 100;
    soma = dupla1 + dupla2;
    multi = soma * soma;
    if (i == multi){
      printf("%d\n", i);
    }
  }
}
