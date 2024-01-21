#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
    char nome_linha[] = "Benco";
    char tipo_chapa1[] = "chapa azul";
    char tipo_chapa2[] = "chapa verde";
    char nomes_produtos[][50] = {"morango Batavo", "tradicional Batavo", "morango itamb�",
	 "tradicional itamb�", "light morango Batava", "light tradicional Batavo", "pessego Batavo"};
    char nomes_mixpaper[][50] = {"mixpaper morango Batavo", "mixpaper tradicional Batavo", "mixpaper morango itambe",
	 "mixpaper tradicional itambe", "mixpaper light morango Batava", "mixpaper light tradicional Batavo", "mixpaper pessego Batavo"};
    float chapa_por_caixa = 0.15;
    float mixpaper_por_caixa = 0.025;
    int caixas_por_producao;
    int total_caixas_por_dia;
    float total_chapa;
    float total_mixpaper;
    int codigo_produto;
    float total_production_time;

    printf("Insira o codigo do produto: ");
    scanf("%d", &codigo_produto);

    if (codigo_produto == 1 || codigo_produto == 2 || codigo_produto == 5 || codigo_produto == 6 || codigo_produto == 9) {
        strcpy(tipo_chapa1, "chapa azul");
        strcpy(tipo_chapa2, "chapa azul");
    } else {
        strcpy(tipo_chapa1, "chapa verde");
        strcpy(tipo_chapa2, "chapa verde");
    }

    printf("Insira o numero de caixas por producao: ");
    scanf("%d", &caixas_por_producao);

    total_caixas_por_dia = 230;
    total_chapa = caixas_por_producao * chapa_por_caixa;
    total_mixpaper = caixas_por_producao * mixpaper_por_caixa;
    total_production_time = (float) caixas_por_producao / 7.6;

    printf("\nSerao necessarios %.2f kg de %s \n %.2f kg de %s para produzir %d caixas de iogurte.\n", total_chapa, tipo_chapa1, total_mixpaper, nomes_mixpaper[codigo_produto - 1], caixas_por_producao);
    printf("O tempo necessario para produzir a demanda diaria sera de %.2f minutos.\n", total_production_time);

    return 0;
}

