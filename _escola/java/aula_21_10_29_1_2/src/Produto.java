public class Produto {
    // a) nome - private String
    private String nome;

    // b) precoCusto e precoVenda - private double
    private double precoCusto;
    private double precoVenda;

    // c) construtor de instâncias de classe que cria um produto
    public Produto(){}

    // d) construtor de instâncias da classe que recebe por parâmetro o nome do produto e cria um produto com esse nome
    public Produto(String nome){
        this.nome = nome ;
    }

    // e) getter e setters dos 3 atributos
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public double getPrecoCusto() {
        return precoCusto;
    }
    public void setPrecoCusto(double precoCusto) {
        this.precoCusto = precoCusto;
    }
    public double getPrecoVenda() {
        return precoVenda;
    }
    public void setPrecoVenda(double precoVenda) {
        this.precoVenda = precoVenda;
    }

    // f) método getMargemLucro() (precoVenda-precoCusto)
    public double getMargemLucro(){
        return precoVenda-precoCusto;
    }

    // g) método de instância getPercentMargemLucro()
    public double getPercentMargemLucro(){
        return (precoVenda/precoCusto)*100-100;
    }
}