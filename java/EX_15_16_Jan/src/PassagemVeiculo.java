import java.util.Date;

//DONE Considere que se pretende desenvolver uma aplicação para registo de passagens num pórtico de portagem de valor fixo
// (do tipo dos encontrados nas ex-SCUTs). Uma passagem de um qualquer veículo é caracterizada pela seguinte informação:
// Código da Passagem (int), Data/Hora da passagem (Date), Marca (String) e Matrícula do veículo (String).
// A passagem de veículos pesados deve ter como atributo adicional o Número de eixos (int).
// Codifique as classes PassagemVeiculo e PassagemVPesado,
// que representam respetivamente a passagem de um qualquer veículo e a passagem de um veículo pesado,
// incluindo construtores, métodos de acesso (getters) e mutação (setters)
// (não implementar um método de mutação para o Código da Passagem,
// devendo este ser atribuído apenas no construtor da classe).
public class PassagemVeiculo {
    protected int codPassagem;
    protected Date dataPassagem;
    protected String marca;
    protected String matricula;

    public PassagemVeiculo() {}

    public PassagemVeiculo(int cod, Date data, String mar, String mat){
        this.codPassagem = cod;
        this.dataPassagem = data;
        this.marca = mar;
        this.matricula = mat;
    }

    public int getCodPassagem() {
        return codPassagem;
    }

    public Date getDataPassagem() {
        return dataPassagem;
    }

    public void setDataPassagem(Date dataPassagem) {
        this.dataPassagem = dataPassagem;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
}