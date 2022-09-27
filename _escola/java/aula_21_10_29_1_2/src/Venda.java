import java.util.Date;

public class Venda {
    // a) dataVenda - private Date
    private java.util.Date dataVenda;

    // b) Produto[] - array de Produtos
    private Produto[] produtos;

    private int i = 0;

    // c) constructor de instância da classe que crie uma venda na data de hoje
    public Venda(){
        this.dataVenda = new Date();
        this.produtos = new Produto[50]; // dá para 50 objetos do tipo Produto
    }

    // d) getter de dataVenda e produtos
    public Date getDataVenda() {return dataVenda;}
    public Produto[] getProdutos() {return produtos;}

    // e) método de instância que adicionaProduto() à venda
    public void adicionaProduto(Produto prod){
        this.produtos[i++] = prod;
    }

    // f) método de instância que calculaTotalVenda()
    public double calculaTotalVenda(){
        double total = 0;

        for(int j=0; j<i; j++){
            total += this.produtos[j].getPrecoVenda();
        }
        return total;
    }

    // g) método de instância totMargem() - total de margem de lucro
    public double totMargem(){
        double total = 0;

        for(int j=0; j<i; j++){
            total += this.produtos[j].getMargemLucro();
        }
        return total;
    }
}
