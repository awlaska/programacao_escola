public class Cliente{
    // Atributos
    private String nome;
    private int nif;

    // Constructors
    public Cliente(){}
    public Cliente(String nome, int nif){
        this.nome = nome;
        this.nif = nif;
    }

    // Métodos
    public String getNome(){
        return this.nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public int getNif(){
        return this.nif;
    }

    public void setNif(int nif){
        this.nif = nif;
    }

}