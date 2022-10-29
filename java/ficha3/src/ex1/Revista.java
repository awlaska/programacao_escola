package ex1;

public class Revista extends Publicacao {
    //DONE i. Os atributos privados ‘nome’ e ‘numeroRevista’ do tipo String;
    private String nome, numeroRevista;
    //TODO ii. Um construtor de Instâncias da Classe;
    //DONE iii. Os métodos Getter e Setter;
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNumeroRevista() {
        return numeroRevista;
    }

    public void setNumeroRevista(String numeroRevista) {
        this.numeroRevista = numeroRevista;
    }

    //TODO iv. O método mostraInformacao() que apresenta a informação da Revista;
    //TODO v. O método introduzirDados(…) que recebe o ‘nome’ e o ‘numeroRevista’ para a Revista;
}
