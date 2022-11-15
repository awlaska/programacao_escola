package Circulo;

public class C1_Circulo{
    private double r;

    public void C1_Circulo(double a, double b, double r){
        super(a, b);
        setRaio(r);
    }

    public void setRaio(double r){
        this.r = r;
    }

    public String toString(){
        return super.toString() + ";R = " + r;
    }
}
