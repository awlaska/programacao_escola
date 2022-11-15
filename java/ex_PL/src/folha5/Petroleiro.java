package folha5;

public class Petroleiro {
    //DONE Matrícula do Navio (String), nome (String) e comprimento (float)
    private String matricula, nome;
    private float comprimento;

    //DONE Um navio petroleiro é um navio com atributo adicional capacidade de carga (float), em toneladas.
    private float toneladas;

    //DONE incluindo construtores, métodos de acesso (getters) e mutação (setters)
    // (não implementar um método de mutação para a Matricula do Navio,
    // devendo esta ser atribuído apenas no construtor da classe);
    public Petroleiro(String matricula, String nome, float comprimento, float toneladas) {
        this.matricula = matricula;
        this.nome = nome;
        this.comprimento = comprimento;
        this.toneladas = toneladas;
    }

    public String getMatricula() {
        return matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public float getComprimento() {
        return comprimento;
    }

    public void setComprimento(float comprimento) {
        this.comprimento = comprimento;
    }

    public float getToneladas() {
        return toneladas;
    }

    public void setToneladas(float toneladas) {
        this.toneladas = toneladas;
    }
}