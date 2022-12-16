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
public class PassagemVPesado extends PassagemVeiculo{
    protected int nrEixos;

    public PassagemVPesado(){}

    public PassagemVPesado(int cod, Date data, String mar, String mat, int nr){
        super(cod, data, mar, mat);
        this.nrEixos = nr;
    }

    public int getNrEixos() {
        return nrEixos;
    }

    public void setNrEixos(int nrEixos) {
        this.nrEixos = nrEixos;
    }
}
