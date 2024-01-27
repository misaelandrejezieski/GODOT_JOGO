class FormsealR {
    public:
        char nome_linha[11] = "Formseal R";
        char tipo_chapa1[14] = "chapa marrom";
        char tipo_chapa2[14] = "chapa amarela";
        char nomes_produtos[3][50] = {"001-chocolate batavo", "002-chocolate itambe", "003-chocolate branco"};
        char nomes_mixpaper[3][50] = {"mixpaper chocolate batavo", "mixpaper chocolate itambe", "mixpaper chocolate branco"};
        float chapa_por_caixa = 0.432;
        float mixpaper_por_caixa = 0.025;
        int caixas_por_producao;
        int total_caixas_por_palete = 108;
        float total_chapa;
        float total_mixpaper;
        int codigo_produto;
        float total_production_time;
        char outro_produto;
};

