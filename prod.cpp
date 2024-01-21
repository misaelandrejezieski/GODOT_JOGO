#include <iostream>
#include "Benco.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    Benco b;
    cout << "Insira o codigo do produto: ";
    cin >> b.codigo_produto;

    if (b.codigo_produto == 1 || b.codigo_produto == 2 || b.codigo_produto == 3 || b.codigo_produto == 4 || b.codigo_produto == 7) {
        strcpy(b.tipo_chapa1, "chapa azul");
        strcpy(b.tipo_chapa2, "chapa azul");
    } else {
        strcpy(b.tipo_chapa1, "chapa verde");
        strcpy(b.tipo_chapa2, "chapa verde");
    }

    cout << "Insira o numero de caixas por producao: ";
    cin >> b.caixas_por_producao;

    b.total_chapa = b.caixas_por_producao * b.chapa_por_caixa;
    b.total_mixpaper = b.caixas_por_producao * b.mixpaper_por_caixa;
    b.total_production_time = (float) b.caixas_por_producao / 7.6 /60;

    cout << "\nSerao necessarios " << b.total_chapa << " kg de " << b.tipo_chapa1 << endl;
    cout << b.total_mixpaper << " kg de " << b.nomes_mixpaper[b.codigo_produto - 1] << " para produzir " << b.caixas_por_producao << " caixas de iogurte." << endl;
    cout << "O tempo necessario para produzir " << b.caixas_por_producao << " caixas de iogurte e de " << b.total_production_time << " horas." << endl;

    return 0;
}

