package folha2.ex1_2_3;

import java.util.Date;

public class Venda {
    //DONE a) Um atributo privado, de tipo Date, dataVenda, para conter a data da venda.
    private Date dataVenda;

    //DONE b) Um atributo privado, de tipo Produto[] (array de Produto),
    // produtos, para conter os produtos vendidos numa venda.
    private Produto[] produtos;

    //DONE No projeto anterior, altere a classe Venda,
    // criando um atributo de classe vendas (double) com o respetivo getter (método de classe),
    // e modificando o construtor de forma a contabilizar em vendas o número de vendas efetuadas
    // (numero de instâncias de Venda criadas).
    private double vendas;

    //DONE c) Um construtor de instâncias da classe, sem argumentos,
    // que cria uma venda na data de hoje (data do sistema).
    public Venda(){
        Venda v = new Venda();
        v.dataVenda = new Date();
        this.vendas++;
    }

    //DONE d) Os métodos getter dos dois atributos definidos anteriormente (dataVenda e produtos).
    public Date getDataVenda() {
        return this.dataVenda;
    }

    public void setDataVenda(Date dataVenda) {
        this.dataVenda = dataVenda;
    }

    public Produto[] getProdutos() {
        return this.produtos;
    }

    public void setProdutos(Produto[] produtos) {
        this.produtos = produtos;
    }

    public double getVendas() {
        return vendas;
    }

    public void setVendas(double vendas) {
        this.vendas = vendas;
    }

    //DOING e) Um método de instância adicionaProduto() que adiciona um produto à venda.
    public void adicionaProduto(Produto p){
        Produto pr = new Produto();
    }

    //DONE f) Um método de instância calculaTotalVenda() que retorna o valor total da venda (soma dos preços de venda dos produtos dessa venda).
    public double calculaTotalVenda(){
        double total = 0.0;
        for(Produto p : produtos){
            total = p.getPrecoVenda() + total;
        }
        return total;
    }

    //DONE g) Um método de instância totMargens()
    // que retorna o total de margem de lucro desta venda.
    public double totMargem(){
        double total = 0.0;
        for(Produto p : produtos){
            total = p.getMargemLucro() + total;
        }
        return total;
    }
}
