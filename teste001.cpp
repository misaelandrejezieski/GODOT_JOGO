#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    char company_name[] = "Benco";
    char sheet_type1[] = "chapa azul";
    char sheet_type2[] = "chapa verde";
    char product_names[][50] = {"morango Batavo", "tradicional Batavo", "grego morango itambé", "tradicional itambé", "light morango Batava", "light tradicional Batavo", "pessego Batavo"};
    float sheet_per_box = 0.15;
    float mixpaper_per_box = 0.025;
    int boxes_per_production;
    int total_boxes_per_day;
    float total_sheet;
    float total_mixpaper;
    char flavor[50];
    int quantity;
    char another_flavor;

    printf("Insira o sabor do iogurte: ");
    scanf("%s", flavor);

    if (strcmp(flavor, "light") == 0) {
        strcpy(sheet_type1, "chapa verde");
        strcpy(sheet_type2, "chapa verde");
    }

    printf("Insira o número de caixas por produção: ");
    scanf("%d", &boxes_per_production);

    total_boxes_per_day = 230;
    total_sheet = boxes_per_production * total_boxes_per_day * sheet_per_box;
    total_mixpaper = boxes_per_production * total_boxes_per_day * mixpaper_per_box;

    printf("Serão necessários %.2f kg de %s e %.2f kg de mixpaper para produzir %d caixas de iogurte sabor %s.\n", total_sheet, sheet_type1, total_mixpaper, boxes_per_production, flavor);

    printf("Deseja inserir outro sabor? (s/n): ");
    scanf(" %c", &another_flavor);

    while (another_flavor == 's') {
        printf("Insira o sabor do iogurte: ");
        scanf("%s", flavor);

        if (strcmp(flavor, "light") == 0) {
            strcpy(sheet_type1, "chapa verde");
            strcpy(sheet_type2, "chapa verde");
        }

        printf("Insira o número de caixas por produção: ");
        scanf("%d", &boxes_per_production);

        total_boxes_per_day = 230;
        total_sheet = boxes_per_production * total_boxes_per_day * sheet_per_box;
        total_mixpaper = boxes_per_production * total_boxes_per_day * mixpaper_per_box;

        printf("Serão necessários %.2f kg de %s e %.2f kg de mixpaper para produzir %d caixas de iogurte sabor %s.\n", total_sheet, sheet_type1, total_mixpaper, boxes_per_production, flavor);

        printf("Deseja inserir outro sabor? (s/n): ");
        scanf(" %c", &another_flavor);
    }

    return 0;
}

