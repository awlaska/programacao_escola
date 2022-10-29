package ex1;

public class Livro extends Publicacao{
    //DONE i. Os atributos privados ‘nome’ e ‘autor’ do tipo String;
    private String nome, autor;

    //DONE ii. Um construtor de Instâncias da Classe;
    Livro(){}

    //DONE iii. Os métodos Getter e Setter;
    public String getNome(){
        return this.nome;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    //DONE iv. O método mostraInformacao() que apresenta a informação do Livro;
    public String mostraInformacao(){
        return super.mostraInformacao() + ", escrito por " + this.autor;
    }

    //DONE v. O método introduzirDados(…) que recebe o ‘nome’ e o ‘autor’ do livro;
    public void introduzirDados(String nome, String autor){
        this.nome = nome;
        this.autor = autor;
    }
}
