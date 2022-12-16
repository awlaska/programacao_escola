package cap6.abstratas;

public abstract class Pessoa {
    private String nome;
    private String morada;
    private int n_BI;

    public Pessoa(){}

    public Pessoa(String nome){
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMorada() {
        return morada;
    }

    public void setMorada(String morada) {
        this.morada = morada;
    }

    public int getN_BI() {
        return n_BI;
    }

    public void setN_BI(int n_BI) {
        this.n_BI = n_BI;
    }

    public abstract String obtemString();
}
