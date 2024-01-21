class EltonFlan {
    public:
        char nome_linha[11] = "Elton Flan";
        char tipo_chapa1[13] = "chapa branca";
        char tipo_chapa2[15] = "chapa amarela";
        char nomes_produtos[5][50] = {"caramelo batavo", "caramelo 4x4 batavo", "frutas vermelhas batavo", "caramelo itambe", "caramelo 4x4 itambe"};
        char nomes_mixpaper[5][50] = {"mixpaper caramelo batavo", "mixpaper caramelo 4x4 batavo", "mixpaper frutas vermelhas batavo", "mixpaper caramelo itambe", "mixpaper caramelo 4x4 itambe"};
        float chapa_por_caixa = 0.342;
        float mixpaper_por_caixa = 0.025;
        int caixas_por_producao;
        int total_caixas_por_palete = 230;
        float total_chapa;
        float total_mixpaper;
        int codigo_produto;
        float total_production_time;
        char outro_produto;
};

