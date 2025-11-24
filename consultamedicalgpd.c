#include <stdio.h>

int main() {
    char nome[100];
    int dia, mes, ano;
    char sexo;
    char tipo_sanguineo[4];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    getchar(); // Consumir o '\n' pendente no buffer

    printf("Digite o sexo (M/F): ");
    scanf("%c", &sexo);
    getchar(); // Consumir o '\n' pendente no buffer

    printf("Digite o tipo sanguíneo (ex: A+, O-, AB+): ");
    fgets(tipo_sanguineo, sizeof(tipo_sanguineo), stdin);

    // Exibir os dados capturados para confirmação
    printf("\nDados capturados:\n");
    printf("Nome: %s", nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", dia, mes, ano);
    printf("Sexo: %c\n", sexo);
    printf("Tipo sanguíneo: %s", tipo_sanguineo);

    return 0;
}

