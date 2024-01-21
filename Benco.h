class Benco {
    public:
        char nome_linha[7] = "Benco";
        char tipo_chapa1[11] = "chapa azul";
        char tipo_chapa2[12] = "chapa verde";
        char nomes_produtos[7][50] = {"morango Batavo", "tradicional Batavo", "morango itambe",
	 "tradicional itambe", "light morango Batava", "light tradicional Batavo", "pessego Batavo"};
        char nomes_mixpaper[7][50] = {"mixpaper morango Batavo", "mixpaper tradicional Batavo", "mixpaper morango itambe",
	 "mixpaper tradicional itambe", "mixpaper light morango Batava", "mixpaper light tradicional Batavo", "mixpaper pessego Batavo"};
        float chapa_por_caixa = 0.150;
        float mixpaper_por_caixa = 0.025;
        int caixas_por_producao;
        int total_caixas_por_palete = 230;
        float total_chapa;
        float total_mixpaper;
        int codigo_produto;
        float total_production_time;
        char outro_produto;
};

