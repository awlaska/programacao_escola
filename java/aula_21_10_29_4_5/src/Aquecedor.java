public class Aquecedor extends Ventoinha{
    private boolean resistenciaLigada;
    private Velocidade potResistencia = Velocidade.PARADA;

    public Aquecedor(){
        super();
    }

    public Velocidade getPotResistencia() {
        return potResistencia;
    }
    public void setPotResistencia(Velocidade potResistencia) {
        this.potResistencia = potResistencia;
    }

    public boolean isResistenciaLigada(){
        return this.resistenciaLigada;
    }

    public void ligarAquecimento(){
        this.resistenciaLigada = true;
    }

    public void desligarAquecimento(){
        this.resistenciaLigada = false;
    }

    public String toString(){
        String s = super.toString();
        s += " e o aquecimento está " + (this.resistenciaLigada?"ligado":"desligado") + " com potência " + this.potResistencia;
        return s;
    }
}
