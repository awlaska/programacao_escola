package ex3;

public class Circulo extends Figura2D{
    private float raio;

    public Circulo(float raio){
        this.raio = raio;
    }

    public double area() throws Figura2DException{
        if(raio <= 0)
            throw new Figura2DException("Area inferior a 0");
        else
            return (Math.PI * raio * raio);
    }
}
