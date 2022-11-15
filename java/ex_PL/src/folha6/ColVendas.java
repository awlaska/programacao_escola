package folha6;

import java.util.Date;
import java.util.List;

public class ColVendas {
    //TODO 1. A ComputerOnix, LDA é uma empresa que vende material informático e presta serviços de TI.
    // Considere que se pretende desenvolver uma aplicação para registo de Vendas na ComputerOnix.
    // Uma venda é genericamente caraterizada pela seguinte informação:
    // Número da venda (int), Data da Venda (Date) e valor (float).
    // Uma venda de artigos é uma venda com atributo adicional artigos (List<Artigo>).
    // Uma venda de serviços é uma venda com atributo adicional serviços (List<Serviço>).
    private int numeroVenda = 0;
    private Date dataVenda;
    private float valor = 0.0f;
    private List<Artigo> artigo;
    private List<Servico> servico;

    //TODO 2. Implemente uma classe ColVendas (apenas os atributos e construtor)
    // para armazenar a informação sobre as vendas da ComputerOnix, LDA
    // (use o tipo de coleção que considerar mais apropriado).
    // A classe deve incluir métodos (nota: pode adicionar métodos às classes anteriores, se necessário) para:

    //TODO a) Adicionar uma nova venda, sem permitir a duplicação do número de venda.
    // O método deve aceitar qualquer tipo de venda como parâmetro, e deve dar uma mensagem de erro se o número da venda for duplicado, e neste caso a venda não deve ser adicionada);
    //TODO b) Devolver o número de vendas numa data passada por parâmetro;
    //TODO c) Devolver a quantidade total de artigos vendidos em todas as vendas de artigos;
    //TODO d) Devolver o valor total de vendas numa data passada por parâmetro
}
