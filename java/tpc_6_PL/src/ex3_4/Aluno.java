package ex3_4;

import java.lang.reflect.Array;

public class Aluno {
    // a. Três atributos de acesso privado: ‘Nome’, ‘Cidade’, ‘email’ do tipo String;
    private String Nome, Cidade, email;

    // b. Dois atributos de acesso privado: ‘Idade’ e ‘NumeroCartao’ do tipo Int;
    private int Idade, NumeroCartao;

    // c. Um array de acesso privado: ‘Notas’ do tipo Double. Este array deve ser inicializado com 5 posições;
    private Double[] Notas;

    // d. Um construtor de instâncias da classe, sem argumentos;
    public Aluno(){
        this.Notas = new Double[5];
    }

    // e. Um construtor de instâncias da classe que recebe por argumento informação para todos os atributos,
    // exceto o array notas;
    Aluno(String nome, String cidade, String email, int idade, int numeroCartao){
        this.Nome = nome;
        this.Cidade = cidade;
        this.email = email;
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
    @Override
    public String toString(){
        return ("O aluno " + this.Nome + " da cidade " + this.Cidade + " com o email " + this.email + " com a idade " +
                this.Idade + " e o nu'mero de cartao " + this.NumeroCartao);
    }

    // h. O método addNota(…), que adiciona uma nota ao aluno;
    public void addNota(Double nota){
        for (int j = 0; j < Notas.length; j++) {
            if (this.Notas[j] == 0) {
                this.Notas[j] = nota;
                return;
            }
        }
    }

    // i. O método obterMedia(…) que calcula e devolve a média das notas do aluno.
    public Double obterMedia(){
        Double media = 0.0;
        for (int j = 0 ; j <= Notas.length; j++) {
            if (Notas[j] != 0) {
                media = (media * (j + 1) + (Notas[j]))/(j + 2);
                break;
            }
        }
        return media;
    }

    // j. O método obterMelhorNota(…) que devolve a melhor nota do aluno.
    public Double obterMelhorNota(){
        Double melhorNota = 0.0;

        for (int j = 0 ; j <= Notas.length; j++) {
            if (Notas[j] > melhorNota) {
                melhorNota = Notas[j];
            }
        }
        return melhorNota;
    }
}