package ex1_2;

import java.util.Scanner;

public class Veiculo {
    Scanner input = new Scanner(System.in);

    // a. Dois Atributos de acesso privado: ‘Marca’ e ‘Modelo’ do tipo String;
    private static String Marca = "", Modelo = "";

    // b. Um atributo de acesso privado: ‘Ano de Lançamento’ do tipo Int;
    private static int AnoDeLancamento = 0;

    // c. Um atributo de acesso privado: ‘Preço Inicial’ do tipo Double;
    private static Double PrecoInicial = 0.0;

    // d. Um construtor de instâncias da classe, sem argumentos;
    public Veiculo(){}

    // e. Um construtor de instâncias da classe que recebe por argumento a
    // Marca, o Modelo e o Ano de Lançamento do Veiculo;
    public Veiculo(String marca, String modelo, int anoDeLancamento){
        this.Marca = marca;
        this.Modelo = modelo;
        this.AnoDeLancamento = anoDeLancamento;
    }

    // f. Os métodos Getters e Setters para os atributos anteriormente definidos;
    public String getMarca() {
        return Marca;
    }

    public void setMarca(String marca) {
        Marca = marca;
    }

    public String getModelo() {
        return Modelo;
    }

    public void setModelo(String modelo) {
        Modelo = modelo;
    }

    public int getAnoDeLancamento() {
        return AnoDeLancamento;
    }

    public void setAnoDeLancamento(int anoDeLancamento) {
        AnoDeLancamento = anoDeLancamento;
    }

    public Double getPrecoInicial() {
        return PrecoInicial;
    }

    public void setPrecoInicial(Double precoInicial) {
        PrecoInicial = precoInicial;
    }

    // g. Defina o método toString(), de modo a que este apresente a informação do Veiculo;
    @Override
    public String toString() {
        return ("O carro da marca " + this.Marca + " e modelo " + this.Modelo + " foi lançado no ano de "
                + this.AnoDeLancamento + " e vende-se por " + this.PrecoInicial + " euros.");
    }

    // h. Assumindo que o preço do Veiculo desce, anualmente, 3% do valor inicial,
    // crie o método getPrecoVeiculo(int ano),
    // que devolve o preço do Veiculo no ano identificado por argumento.
    // O ano passado por argumento deve ser superior ao ano de lançamento.
    public Double getPrecoVeiculo(int ano){
        int anoL = this.getAnoDeLancamento();

        if(!(anoL >= this.getAnoDeLancamento())){
            return -1.0;
        } else{
            return (this.PrecoInicial - (this.PrecoInicial * 0.03 * (ano-anoL)));
        }
    }
}