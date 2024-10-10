#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int codigoCracha;
    char setor[50];
} Registro;

void adicionarRegistro(const char* nomeArquivo) {
    FILE* arquivo = fopen(nomeArquivo, "ab"); // "ab" para adicionar no final do arquivo
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    Registro reg;
    printf("Digite o nome do funcionario: ");
    getchar(); // Limpa o buffer
    fgets(reg.nome, sizeof(reg.nome), stdin);
    
    printf("Digite o codigo do cracha: ");
    scanf("%d", &reg.codigoCracha);
    
    printf("Digite o setor de trabalho: ");
    getchar(); // Limpa o buffer novamente
    fgets(reg.setor, sizeof(reg.setor), stdin);

    fwrite(&reg, sizeof(Registro), 1, arquivo);
    fclose(arquivo);
    printf("Registro adicionado com sucesso!\n");
}

void lerRegistros(const char* nomeArquivo) {
    FILE* arquivo = fopen(nomeArquivo, "rb"); // "rb" para ler o arquivo
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    Registro reg;
    while (fread(&reg, sizeof(Registro), 1, arquivo)) {
        printf("Nome: %s", reg.nome);
        printf("Codigo do cracha: %d\n", reg.codigoCracha);
        printf("Setor: %s", reg.setor);
        printf("-----------------------\n");
    }

    fclose(arquivo);
}

int main() {
    const char* nomeArquivo = "funcionarios.dat";
    int opcao;

    do {
        printf("Escolha uma opcao:\n");
        printf("1. Adicionar funcionario\n");
        printf("2. Ver funcionarios\n");
        printf("3. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarRegistro(nomeArquivo);
                break;
            case 2:
                lerRegistros(nomeArquivo);
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
