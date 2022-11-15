package Circulo;

public class C1_Ponto {
    double x = 0, y = 0;

    public void C1_Ponto(double a, double b) {
        setPonto(a,b);
    }

    public void C1_Ponto(){
        setPonto(0, 0);
    }

    public void setPonto(double a, double b){
        x = a;
        y = b;
    }

    public String toString(){
        return "X = " + x + "; Y = " + y;
    }
}
