#include <stdio.h>
#include <stdlib.h>
/*
int main() {
char filename[12];
char content[50];
FILE *file;

for (int i = 1; i <= 10; i++) {
sprintf(filename, "teste%02d.txt", i);
sprintf(content, "Texto do arquivo %02d", i);

file = fopen(filename, "w");
if (file == NULL) {
printf("Erro ao criar o arquivo %s\n", filename);
continue;
}

fprintf(file, "%s", content);
fclose(file);

printf("Arquivo %s criado com sucesso.\n", filename);
}

}*/