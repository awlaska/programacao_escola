package ex5;

public class Ventoinha {
    //DONE i. Um atributo privado ‘ventoinhaLigada’, do tipo boolean, que indica se a ventoinha está ligada ou não;
    private boolean ventoinhaLigada = false;

    //DONE ii. Um atributo privado ‘velocidadeVentoinha’ do tipo Velocidade. Por defeito, o valor da velocidade é BAIXA.
    private Velocidade velocidadeVentoinha = Velocidade.BAIXA;

    //DONE iii. Um construtor de instâncias da classe sem argumentos;
    Ventoinha(){}

    //DONE iv. O Getter e Setter para a ‘velocidadeVentoinha’;
    public Velocidade getVelocidadeVentoinha() {
        return velocidadeVentoinha;
    }

    public void setVelocidadeVentoinha(Velocidade velocidadeVentoinha) {
        this.velocidadeVentoinha = velocidadeVentoinha;
    }

    //DONE v. O método ventoinhaLigada() que indica se a ventoinha está ligada ou não.
    // Funciona como Getter do atributo ‘ligada’;
    public boolean VentoinhaLigada(){
        return this.ventoinhaLigada;
    }

    //DONE vi. O método ligar() que liga a ventoinha;
    public void ligar(){
        this.ventoinhaLigada = true;
    }

    //DONE vii. O método desligar() que desliga a ventoinha;
    public void desligar(){
        this.ventoinhaLigada = false;
    }

    //DONE viii. O método toString() reescrito de modo a apresentar a informação da ventoinha;
    @Override
    public String toString(){
        return "A ventoinha está " + (this.ventoinhaLigada ? "ligada" : "desligada") + " com a velocidade " +
                this.velocidadeVentoinha + ".";
    }
}
