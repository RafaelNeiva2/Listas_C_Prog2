void calcula_corrida(float dist, float *b1, float *b2)
{
    *b1 = 4.95 + (dist*2.5);
    printf("O valor na bandeirada 1: %.2f\n", *b1);
    *b2 = 4.95 + (dist*3.0);
    printf("O valor na bandeirada 2: %.2f", *b2);
}

int main()
{
    float dist, *corrida_um, *corrida_dois;

    printf("Informe a distancia em KM: ");
    scanf("%f", &dist);

    calcula_corrida(dist, &corrida_um, &corrida_dois);
    return 0;
}