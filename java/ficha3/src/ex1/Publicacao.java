package ex1;

public class Publicacao {
    //DONE i. O atributo privado ‘nome’ do tipo String;
    private String nome;

    //DONE ii. A variável de Classe privada ‘quantidadePublicacoes’ do tipo inteiro,
    // que representará o número de Publicações que foram criadas.
    private int quantidadePublicacoes;

    //DONE iii. O atributo privado ‘numeroPublicacao’ do tipo inteiro.
    // Este número pode ser visto como um identificador único.
    private int numeroPublicacao;

    //DONE iv. Um Construtor de Instâncias da Classe.
    // O construtor deverá igualar o atributo ‘numeroPublicacao’ ao valor da variável da classe ‘quantidadePublicacoes’
    // e depois incrementar a última;
    Publicacao(){
        numeroPublicacao = quantidadePublicacoes;
        quantidadePublicacoes++;
    }

    //DONE v. Os métodos Getter e Setter;
    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQuantidadePublicacoes() {
        return quantidadePublicacoes;
    }

    public void setQuantidadePublicacoes(int quantidadePublicacoes) {
        this.quantidadePublicacoes = quantidadePublicacoes;
    }

    public int getNumeroPublicacao() {
        return numeroPublicacao;
    }

    public void setNumeroPublicacao(int numeroPublicacao) {
        this.numeroPublicacao = numeroPublicacao;
    }

    //TODO vi. O método mostraInformacao() que apresenta a informação da publicação;
    //TODO vii. O método introduzirDados(…) que recebe o ‘nome’ para a publicação;
    //TODO viii. O método obterQuantidadePublicacoes() que devolve o número de publicações existentes.
}
