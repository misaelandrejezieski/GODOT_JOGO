#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include "Benco.h"
#include "PrimePack.h"
#include "EltonFlan.h"
#include "FormsealR.h"

using namespace std;

int main() {
    int escolha;
    char resposta;
    
    do {
    		printf("-----------------------------------\n");
  	    	printf("            SOBREMESA\n");
            printf("-----------------------------------\n");
    
         cout << "\nEscolha a linha de producao:\n1 - Benco\n2 - Prime Pack\n3 - Elton Flan\n4 - Formseal R\n";
        cin >> escolha;

        if (escolha == 1) {
            Benco b;
            
            for(int i = 0; i < 7; i++) {
       			for(int j = 0; j < 50; j++) {
            		printf("%c ", b.nomes_produtos[i][j]);
        		}
       			 printf("\n");
    		}

            cout << "\nInsira o codigo do produto: ";
                  
            cin >> b.codigo_produto;

            if (b.codigo_produto == 1 || b.codigo_produto == 2 || b.codigo_produto == 3 || b.codigo_produto == 4 || b.codigo_produto == 7) {
                strcpy(b.tipo_chapa1, "chapa azul");
                strcpy(b.tipo_chapa2, "chapa azul");
            } else if (b.codigo_produto == 6 || b.codigo_produto == 5){
                strcpy(b.tipo_chapa1, "chapa verde");
                strcpy(b.tipo_chapa2, "chapa verde");
            } else {
            	cout << "Codigo invalido!\n";
            	system("pause");
            	system("cls");
				return main();
            	
				}

            cout << "Insira o numero de caixas por producao: ";
            cin >> b.caixas_por_producao;

            b.total_chapa = b.caixas_por_producao * b.chapa_por_caixa;
            b.total_mixpaper = b.caixas_por_producao * b.mixpaper_por_caixa;
            b.total_production_time = (float) b.caixas_por_producao / 7.6 /60;

            cout << "\nSerao necessarios " << b.total_chapa << " kg de " << b.tipo_chapa1 << endl;
            cout << b.total_mixpaper << " kg de " << b.nomes_mixpaper[b.codigo_produto - 1] << " para produzir " << b.caixas_por_producao << " caixas de iogurte." << endl;
            cout << "O tempo necessario para produzir " << b.caixas_por_producao << " caixas de iogurte e de " << b.total_production_time << " horas." << endl;

        } else if (escolha == 2) {
            PrimePack p;
             for(int i = 0; i < 5; i++) {
       			for(int j = 0; j < 50; j++) {
            		printf("%c ", p.nomes_produtos[i][j]);
        		}
       			 printf("\n");
    		}
            cout << "\nInsira o codigo do produto: ";
            cin >> p.codigo_produto;

          
            if (p.codigo_produto == 3) {
             strcpy(p.tipo_chapa1, "chapa amarela");
             strcpy(p.tipo_chapa2, "chapa amarela");
           } else if (p.codigo_produto == 1 || p.codigo_produto == 2 || p.codigo_produto == 4 || p.codigo_produto == 5){
                   strcpy(p.tipo_chapa1, "chapa marrom");
                   strcpy(p.tipo_chapa2, "chapa amarela");
           } else {
            	cout << "Codigo invalido!\n";
            	system("pause");
            	system("cls");
				return main();
            	
				}

            cout << "Insira o numero de caixas por producao: ";
            cin >> p.caixas_por_producao;

            p.total_chapa = p.caixas_por_producao * p.chapa_por_caixa;
            p.total_mixpaper = p.caixas_por_producao * p.mixpaper_por_caixa;
            p.total_production_time = (float) p.caixas_por_producao / 7.66 / 60;

            cout << "\nSerao necessarios " << p.total_chapa << " kg de " << p.tipo_chapa1 << endl;
            cout << p.total_mixpaper << " kg de " << p.nomes_mixpaper[p.codigo_produto - 1] << " para produzir " << p.caixas_por_producao << " caixas de chocolate." << endl;
            cout << "O tempo necessario para produzir " << p.caixas_por_producao << " caixas de chocolate e de " << p.total_production_time << " horas." << endl;

        } else if (escolha == 3) {
            EltonFlan  e;
             for(int i = 0; i < 5; i++) {
       			for(int j = 0; j < 50; j++) {
            		printf("%c ", e.nomes_produtos[i][j]);
        		}
       			 printf("\n");
    		}
            cout << "\n Insira o codigo do produto: ";
            cin >> e.codigo_produto;

          
            if (e.codigo_produto == 1 || e.codigo_produto == 2 || e.codigo_produto == 3 || e.codigo_produto == 4 || e.codigo_produto == 5) {
             strcpy(e.tipo_chapa1, "chapa branca");
             strcpy(e.tipo_chapa2, "chapa branca");
           } else {
            	cout << "Codigo invalido!\n";
            	system("pause");
            	system("cls");
				return main();
            	
				}

            cout << "Insira o numero de caixas por producao: ";
            cin >> e.caixas_por_producao;
            e.total_chapa = e.caixas_por_producao * e.chapa_por_caixa;
            e.total_mixpaper = e.caixas_por_producao * e.mixpaper_por_caixa;
            e.total_production_time = (float) e.caixas_por_producao / 7.66 / 60;

            cout << "\nSerao necessarios " << e.total_chapa << " kg de " << e.tipo_chapa1 << endl;
            cout << e.total_mixpaper << " kg de " << e.nomes_mixpaper[e.codigo_produto - 1] << " para produzir " << e.caixas_por_producao << " caixas de Flan." << endl;
            cout << "O tempo necessario para produzir " << e.caixas_por_producao << " caixas de flan e de " << e.total_production_time << " horas." << endl;

        } else if (escolha == 4){
			FormsealR f;
			 for(int i = 0; i < 3; i++) {
       			for(int j = 0; j < 50; j++) {
            		printf("%c ", f.nomes_produtos[i][j]);
        		}
       			 printf("\n");
    		}
    		cout << "\n Insira o codigo do produto: ";
    		cin >> f.codigo_produto;
    		
    		if (f.codigo_produto == 1 || f.codigo_produto == 2) {
             strcpy(f.tipo_chapa1, "chapa marrom");
             strcpy(f.tipo_chapa2, "chapa marrom");
           }else if(f.codigo_produto == 3){
		   		strcpy(f.tipo_chapa1, "chapa amarela");
		   } else {
            	cout << "Codigo invalido!\n";
            	system("pause");
            	system("cls");
				return main();
           	}

    		cout << "Insira o numero de caixas por producao: ";
    		cin >> f.caixas_por_producao;

    		f.total_chapa = f.caixas_por_producao * f.chapa_por_caixa;
    		f.total_mixpaper = f.caixas_por_producao * f.mixpaper_por_caixa;
    		f.total_production_time = (float) f.caixas_por_producao / 7.6 /60;

    		cout << "\nSerao necessarios " << f.total_chapa << " kg de " << f.tipo_chapa1 << endl;
    		cout << f.total_mixpaper << " kg de " << f.nomes_mixpaper[f.codigo_produto - 1] << " para produzir " << f.caixas_por_producao << " caixas de " << f.codigo_produto[f.nomes_produtos]endl;
    		cout << "O tempo necessario para produzir " << f.caixas_por_producao << " caixas de chocolate e de " << f.total_production_time << " horas." << endl;

		}else {
            cout << "Opcao invalida. Tente novamente.\n" << endl;
        }		

        cout << "\n** Deseja inserir mais produtos? (s/n): ";
        cin >> resposta;
        system("cls");
    } while (resposta == 's' || resposta == 'S');
    		cout << "-----------------------------------------";
    		cout << "    \n### Aperte ENTER para sair. ####\n";
			cout << "     @@@ Sayonaha babaca! @@@     \n";
    		return 0;
}

