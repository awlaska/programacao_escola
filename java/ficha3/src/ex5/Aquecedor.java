package ex5;

public class Aquecedor extends Ventoinha{
    //DONE i. Um atributo privado ‘resistenciaLigada’, do tipo boolean,
    // que indica se a resistência do aquecedor está ligada ou não.
    private boolean resistenciaLigada = false;

    //DONE ii. Um atributo privado ‘potenciaResistencia’ do tipo Velocidade.
    private Velocidade potenciaResistencia;

    //DONE iii. Um construtor de instância da classe sem argumentos;
    Aquecedor(){}

    //DONE iv. O Getter e Setter para a ‘potenciaResistencia’;

    public Velocidade getPotenciaResistencia() {
        return potenciaResistencia;
    }

    public void setPotenciaResistencia(Velocidade potenciaResistencia) {
        this.potenciaResistencia = potenciaResistencia;
    }

    //DONE v. O método resistenciaLigada() que indica se a resistência está ligada ou não.
    // Funciona como Getter para a ‘resistenciaLigada’;
    public boolean ResistenciaLigada(){
        return this.resistenciaLigada;
    }

    //DONE vi. O método ligarAquecimento() que liga o aquecimento (liga a resistência elétrica);
    public void ligarAquecimento(){
        this.resistenciaLigada = true;
    }

    //DONE vii. O método desligarAquecimento() que desliga o aquecimento (desliga a resistência);
    public void desligarAquecimento(){
        this.resistenciaLigada = false;
    }

    //DONE viii. O método toString() reescrito de modo a apresentar a informação do aquecedor;
    public String toString(){
        return super.toString() + " e tem a resistencia " + (this.resistenciaLigada ? "ligada" : "desligada") +
                " com potencia " + this.potenciaResistencia;
    }
}
