package folha5;

public class PortaContentores {
    //DONE Matrícula do Navio (String), nome (String) e comprimento (float)
    private String matricula, nome;
    private float comprimento;

    //DONE Um navio porta contentores é um navio com atributo adicional numero máximo de contentores (int).
    private int nrMaxContentores;

    //DONE incluindo construtores, métodos de acesso (getters) e mutação (setters)
    // (não implementar um método de mutação para a Matricula do Navio,
    // devendo esta ser atribuído apenas no construtor da classe).
    public PortaContentores(String matricula, String nome, float comprimento, int nrMaxContentores) {
        this.matricula = matricula;
        this.nome = nome;
        this.comprimento = comprimento;
        this.nrMaxContentores = nrMaxContentores;
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

    public float getNrMaxContentores() {
        return nrMaxContentores;
    }

    public void setNrMaxContentores(int nrMaxContentores) {
        this.nrMaxContentores = nrMaxContentores;
    }
}
