int main(){
    srand(time(NULL)); 
    char letraSorteada = 'a' + rand() % 26; 
    char letraAdivinhada;

    do {
        printf("Digite uma letra entre 'a' e 'z': ");
        scanf(" %c", &letraAdivinhada);

        if (letraAdivinhada < letraSorteada) {
            printf("A letra é maior.\n");
        } else if (letraAdivinhada > letraSorteada) {
            printf("A letra é menor.\n");
        }
    } while (letraAdivinhada != letraSorteada);

    printf("Parabéns! Você acertou a letra %c.\n", letraSorteada);

    return 0;
}  
