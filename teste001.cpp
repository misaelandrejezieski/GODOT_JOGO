#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
    char nome_linha[50];
    char tipo_chapa1[50];
    char tipo_chapa2[50];
    char nomes_produtos[][50] = {"morango Batavo", "tradicional Batavo", "morango itambé",
	 "tradicional itambé", "light morango Batava", "light tradicional Batavo", "pessego Batavo", "chocolate preto Batavo", "chocolate preto 4x4 Batavo", "chocolate branco Batavo", "chocolate preto Itambe", "chocolate preto Itambe 4x4"};
    char nomes_mixpaper[][50] = {"mixpaper morango Batavo", "mixpaper tradicional Batavo", "mixpaper morango itambe",
	 "mixpaper tradicional itambe", "mixpaper light morango Batava", "mixpaper light tradicional Batavo", "mixpaper pessego Batavo", "mixpaper chocolate preto Batavo", "mixpaper chocolate preto 4x4 Batavo", "mixpaper chocolate branco Batavo", "mixpaper chocolate preto Itambe", "mixpaper chocolate preto Itambe 4x4"};
    float chapa_por_caixa = 0.209;
    float mixpaper_por_caixa = 0.025;
    int caixas_por_producao;
    int total_caixas_por_dia;
    float total_chapa;
    float total_mixpaper;
    int codigo_produto;
    float total_production_time;
    char outro_produto;

    printf("Insira o codigo da linha: ");
    scanf("%d", &codigo_produto);

    if (codigo_produto == 1) {
        strcpy(nome_linha, "Benco");
        strcpy(tipo_chapa1, "chapa azul");
        strcpy(tipo_chapa2, "chapa azul");
    } else if (codigo_produto == 2) {
        strcpy(nome_linha, "Prime Pack");
        strcpy(tipo_chapa1, "chapa marrom");
        strcpy(tipo_chapa2, "chapa amarela");
    }

    do {
        printf("Insira o codigo do produto: ");
        scanf("%d", &codigo_produto);

        if (codigo_produto == 1 || codigo_produto == 2 || codigo_produto == 5 || codigo_produto == 6 || codigo_produto == 9) {
            strcpy(tipo_chapa1, "chapa azul");
            strcpy(tipo_chapa2, "chapa azul");
        } else if (codigo_produto == 10) {
            strcpy(tipo_chapa1, "chapa amarela");
            strcpy(tipo_chapa2, "chapa amarela");
        } else {
            strcpy(tipo_chapa1, "chapa marrom");
            strcpy(tipo_chapa2, "chapa marrom");
        }

        printf("Insira o numero de caixas por producao: ");
        scanf("%d", &caixas_por_producao);

        total_caixas_por_dia = 230;
        total_chapa = caixas_por_producao * chapa_por_caixa;
        total_mixpaper = caixas_por_producao * mixpaper_por_caixa;
        total_production_time = (float) caixas_por_producao / 7.6 /60;

        printf("\nSerao necessarios %.2f kg de %s \n%.2f kg de %s para produzir %d caixas de iogurte.\n", total_chapa, tipo_chapa1, total_mixpaper, nomes_mixpaper[codigo_produto - 1], caixas_por_producao);
        printf("O tempo necessario para produzir a demanda diaria sera de %.2f horas.\n", total_production_time);

        printf("Deseja inserir outro produto? (s/n): ");
        scanf(" %c", &outro_produto);
    } while (outro_produto == 's');

    return 0;
}


