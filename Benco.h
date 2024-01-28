class Benco {
    public:
        char nome_linha[8] = "Benco";
        char tipo_chapa1[11] = "chapa azul";
        char tipo_chapa2[12] = "chapa verde";
        char nomes_produtos[7][50] = {"001-morango Batavo", "002-tradicional Batavo", "003-morango itambe",
	 "004-tradicional itambe", "005-light morango Batava", "006-light tradicional Batavo", "007-pessego Batavo"};
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

