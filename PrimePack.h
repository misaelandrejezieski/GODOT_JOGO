class PrimePack {
    public:
        char nome_linha[11] = "Prime Pack";
        char tipo_chapa1[14] = "chapa marrom";
        char tipo_chapa2[14] = "chapa amarela";
        char nomes_produtos[5][50] = {"chocolate preto batavo", "chocolate preto 4x4 batavo", "chocolate branco batavo", "chocolate preto itambe", "chocolate preto 4x4 itambe"};
        char nomes_mixpaper[5][50] = {"mixpaper chocolate preto batavo", "mixpaper chocolate preto 4x4 batavo", "mixpaper chocolate preto itambe", "chocolate preto 4x4 itambe", "chocolate preto itambe"};
        float chapa_por_caixa = 0.209;
        float mixpaper_por_caixa = 0.025;
        int caixas_por_producao;
        int total_caixas_por_palete = 230;
        float total_chapa;
        float total_mixpaper;
        int codigo_produto;
        float total_production_time;
        char outro_produto;
};

