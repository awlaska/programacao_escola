package herancas;

public class Retangulo extends Fig2D {
    private float lado1, lado2;

    // Constructor
    public Retangulo(){}

    public Retangulo(float lado1, float lado2){
        this.lado1 = lado1;
        this.lado2 = lado2;
    }

    // Getters e Setters
    public float getLado1() {
        return lado1;
    }

    public void setLado1(float lado1) {
        this.lado1 = lado1;
    }

    public float getLado2() {
        return lado2;
    }

    public void setLado2(float lado2) {
        this.lado2 = lado2;
    }

    @Override
    public float getArea(){
        return this.lado1 * this.lado2;
    }
}
