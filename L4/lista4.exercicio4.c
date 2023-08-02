int testa_pa(int n, int *v)
{
    int i, k;

    printf("Informe o elemento 1: ");
    scanf("%d", &v[0]);
    printf("Informe o elemento 2: ");
    scanf("%d", &v[1]);
    k = v[1] - v[0];

    for (i = 2; i < n; i++){
        printf("Informe o elemento %d :", i+1);
        scanf(" %d", &v[i]);
        if (v[i] != v[i - 1] + k){
            return 0;
        }
    }
    return k;
}

int main()
{
    int n, i, k = 0, *v;

    printf("Digite o tamanho: ");
    scanf("%d", &n);
    v = (int*)malloc(n * sizeof(int));

    int pa = testa_pa(n, v);

    if(pa != 0){
        printf("Essa sequencia e uma PA!");
    }
    else{
        printf("Essa sequencia nao e uma PA!");
    }
    free(v);
    return 0;
}