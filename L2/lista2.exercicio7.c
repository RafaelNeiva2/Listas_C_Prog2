int main(){
  int valorHora, qtdHora, salario;
  printf("Digite o número de horas trabalhadas:\n");
  scanf("%d", &qtdHora);
  printf("Digite o valor de cada hora trabalhada:\n");
  scanf("%d", &valorHora);
  if(qtdHora <= 40){
    salario = qtdHora * valorHora;
  }else if(qtdHora > 40 && qtdHora < 60){
    salario = (qtdHora * valorHora) + (valorHora * (qtdHora - 40) / 2);
  }else if(qtdHora > 60){
    salario = (qtdHora * valorHora) + ((qtdHora - 60) * valorHora);
  }
  printf("Seu salário semanal foi de %d reais!", salario);
}
