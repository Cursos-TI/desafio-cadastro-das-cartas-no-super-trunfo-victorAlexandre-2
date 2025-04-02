#include <stdio.h>

typedef struct {
    char nome[20];
    int populacao;  // Em milhões
    int area;       // Em km²
    int pib;        // Em bilhões de reais
} Cidade;

int main() {
    // Definição das cartas de São Paulo e Rio de Janeiro
    Cidade sp = {"São Paulo", 12, 1521, 2400};
    Cidade rj = {"Rio de Janeiro", 6, 1200, 415};

    int escolha, rodadas = 3;

    printf(" SUPER TRUNFO: São Paulo x Rio de Janeiro \n");

    while (1) {
        rodadas++;
        printf("\n🔹 Rodada %d\n", rodadas);
        printf("Escolha um atributo para comparar:\n");
        printf("1️⃣ População\n2️⃣ Área\n3️⃣ PIB\n4️⃣ Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        if (escolha == 4) {
            printf("🎮 Jogo encerrado. Obrigado por jogar!\n");
            break;
        }
        switch (escolha) {
            case 1:
                printf("\n População:\n");
                printf("São Paulo: %d milhões\n", sp.populacao);
                printf("Rio de Janeiro: %d milhões\n", rj.populacao);
                printf("🏆 Vencedor: %s\n", (sp.populacao > rj.populacao) ? "São Paulo" : "Rio de Janeiro");
                break;
            case 2:
                printf("\n Área:\n");
                printf("São Paulo: %d km²\n", sp.area);
                printf("Rio de Janeiro: %d km²\n", rj.area);
                printf("🏆 Vencedor: %s\n", (sp.area > rj.area) ? "São Paulo" : "Rio de Janeiro");
                break;
            case 3:
                printf("\n💰 PIB:\n");
                printf("São Paulo: R$ %d bilhões\n", sp.pib);
                printf("Rio de Janeiro: R$ %d bilhões\n", rj.pib);
                printf("🏆 Vencedor: %s\n", (sp.pib > rj.pib) ? "São Paulo" : "Rio de Janeiro");
                break;
            default:
                printf("❌ Escolha inválida. Tente novamente.\n");
        }
    }

    return 0;
}
