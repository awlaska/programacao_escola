package herancas;

public class Quadrado extends Retangulo {
    public Quadrado(){}
    public Quadrado(float lado){
        super();
        this.setLado1(lado);
        this.setLado2(lado);
    }

    @Override
    public void setLado1(float lado){
        super.setLado1(lado);
        super.setLado2(lado);
    }

    public void setLado2(float lado){
        this.setLado1(lado);
    }
}
