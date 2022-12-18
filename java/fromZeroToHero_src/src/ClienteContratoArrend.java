public class ClienteContratoArrend {
    private String nome;
    private String nif;

    public ClienteContratoArrend(String nome, String nif) {
        this.nome = nome;
        this.nif = nif;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNif() {
        return nif;
    }

    public void setNif(String nif) {
        this.nif = nif;
    }
}
