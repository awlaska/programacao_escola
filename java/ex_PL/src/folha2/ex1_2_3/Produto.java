package folha2.ex1_2_3;

public class Produto {
    //DONE a) Um atributo privado de tipo String, nome, para o nome do produto.
    private String nome;

    //DONE b) Dois atributos de acesso privado, precoCusto e precoVenda, com tipo double,
    // para conterem respetivamente o preço de custo e o preço de venda do produto.
    private double precoCusto, precoVenda;

    //DONE c) Um construtor de instâncias da classe, sem argumentos, que cria um produto.
    Produto(){
        Produto prod = new Produto();
    }

    //DONE d) Um construtor de instâncias da classe que recebe por parâmetro o nome do produto
    // e cria um produto com esse nome.
    Produto(String nome){
        Produto prod = new Produto();
        prod.nome = nome;
    }

    //TODO e) Os métodos getters e setters dos três atributos definidos anteriormente.

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

    //DONE f) Um método de instância getMargemLucro() que retorna a margem de lucro do produto
    // (diferença entre o preço de venda e o preço de custo).
    public double getMargemLucro(){
        return (this.precoVenda - this.precoCusto);
    }

    //DONE g) Um método de instância getPercentMargemLucro() que retorna a percentagem da margem de lucro
    // (a razão entre o preço de venda e o preço de custo).
    public double getPercentagemMargemLucro(){
        return (this.precoVenda / this.precoCusto);
    }
}