import java.util.List;

public class Claque {
    private String nome;
    private List<Elemento> elementos;

    public Claque(){}

    public Claque(String nome, List<Elemento> elementos){
        this.nome = nome;
        this.elementos = elementos;
    }

    public String getNome() {
        return this.nome;
    }
}
