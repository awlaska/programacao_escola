package ex4;

public class Cliente {
    //DONE i. Os atributos privados ‘nome’, ‘cidade’ do tipo String;
    private String nome = "", cidade = "";

    //DONE ii. O atributo privado ‘NIF’ do tipo String;
    private String NIF = "";

    //DONE iii. Um construtor de instâncias da classe;
    Cliente(String nome, String cidade, String NIF){
        this.nome = nome;
        this.cidade = cidade;
        this.NIF = NIF;
    }

    //DONE iv. Os métodos Getter e Setter;
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCidade() {
        return cidade;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }

    public String getNIF() {
        return NIF;
    }

    public void setNIF(String NIF) {
        this.NIF = NIF;
    }


    //DONE v. O método toString() reescrito de modo a apresentar a informação do cliente.
    @Override
    public String toString() {
        return "O cliente tem como nome " + this.nome + ", vive em " + this.cidade + " e tem como NIF " + this.NIF;
    }
}
