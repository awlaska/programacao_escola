public class Cliente{
    private String nome;
    private String nif;

    public Cliente(){}
    public Cliente(String nome, String nif){
        this.nome = nome;
        this.nif = nif;
    }

    public String getNome(){
        return this.nome;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public String getNif(){
        return this.nif;
    }

    public void setNif(String nif){
        this.nif = nif;
    }

}