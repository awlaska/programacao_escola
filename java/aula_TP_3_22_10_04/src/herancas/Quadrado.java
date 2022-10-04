package herancas;

public class Quadrado extends Retangulo {
    public Quadrado(){}
    public Quadrado(float lado){
        super();
        this.setLado1(lado);
        this.setLado2(lado);
    }

    @Override
    public void setLado1(float lado1){
        super.setLado1(lado1);
        super.setLado2(lado1);
    }

    public void setLado2(float lado2){
        this.setLado1(lado2);
    }

}
