package ex1;

public class Revista extends Publicacao {
    //DONE i. Os atributos privados ‘nome’ e ‘numeroRevista’ do tipo String;
    private String nome = "", numeroRevista = "";

    //DONE ii. Um construtor de Instâncias da Classe;
    Revista(){}

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

    //DONE iv. O método mostraInformacao() que apresenta a informação da Revista;
    public String mostraInformacao(){
        return super.mostraInformacao() + " e numero de revista " + this.numeroRevista;
    }

    //DONE v. O método introduzirDados(…) que recebe o ‘nome’ e o ‘numeroRevista’ para a Revista;
    public void introduzirDados(String nome, String numeroRevista){
        this.nome = nome;
        this.numeroRevista = numeroRevista;
    }
}
