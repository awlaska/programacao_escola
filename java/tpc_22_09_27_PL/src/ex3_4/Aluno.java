package ex3_4;

import java.lang.reflect.Array;

public class Aluno {
    // a. Três atributos de acesso privado: ‘Nome’, ‘Cidade’, ‘email’ do tipo String;
    private String Nome, Cidade, email;

    // b. Dois atributos de acesso privado: ‘Idade’ e ‘NumeroCartao’ do tipo Int;
    private int Idade, NumeroCartao;

    // c. Um array de acesso privado: ‘Notas’ do tipo Double. Este array deve ser inicializado com 5 posições;
    private Double[] Notas = new Double[5];

    // d. Um construtor de instâncias da classe, sem argumentos;
    Aluno(){}

    // e. Um construtor de instâncias da classe que recebe por argumento informação para todos os atributos,
    // exceto o array notas;
    Aluno(String nome, String cidade, String emaill, int idade, int numeroCartao){
        this.Nome = nome;
        this.Cidade = cidade;
        this.email = emaill;
        this.Idade = idade;
        this.NumeroCartao = numeroCartao;
    }

    // f. Os métodos Getter e Setter para os atributos;

    public String getNome() {
        return Nome;
    }

    public void setNome(String nome) {
        Nome = nome;
    }

    public String getCidade() {
        return Cidade;
    }

    public void setCidade(String cidade) {
        Cidade = cidade;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public int getIdade() {
        return Idade;
    }

    public void setIdade(int idade) {
        Idade = idade;
    }

    public int getNumeroCartao() {
        return NumeroCartao;
    }

    public void setNumeroCartao(int numeroCartao) {
        NumeroCartao = numeroCartao;
    }

    public Double[] getNotas() {
        return Notas;
    }

    public void setNotas(Double[] notas) {
        Notas = notas;
    }

    // g. O método toString(), de modo a que este apresente a informação do aluno;
    public String toString(){
        return ("O aluno " + getNome() + " da cidade " + getCidade() + " com o email " + getEmail() + " com a idade " +
                getIdade() + " e o nu'mero de cartao " + getNumeroCartao());
    }

    // h. O método addNota(…), que adiciona uma nota ao aluno;
    public void addNota(Double nota){
        int firstFree = -1;
        for (int j = 0 ; j <=Notas.length; j++) {
            if (Notas[j] == null) {
                this.Notas[j] = nota;
                break;
            }
        }
    }
    // i. O método obterMedia(…) que calcula e devolve a média das notas do aluno.
    public Double obterMedia(){
        Double media = 0.0;

        for (int j = 0 ; j <=Notas.length; j++) {
            if (Notas[j] != null) {
                media = (media * (j + 1) + (Notas[j]))/(j + 2);
                break;
            }
        }

        return media;
    }

    // j. O método obterMelhorNota(…) que devolve a melhor nota do aluno.
}
