public class Main {
    public void main(String args[]) {
        // 1
        Retangulo r = new Retangulo(2, 3);
        System.out.println("Largura: " + r.getLargura() + ", Altura: " + r.getAltura() + ", Area: " + r.getArea() +
                ", Perimetro: " + r.getPerimetro());
        Retangulo rr = new Retangulo(4, 10);
        System.out.println("Largura: " + rr.getLargura() + ", Altura: " + rr.getAltura() + ", Area: " + rr.getArea() +
                ", Perimetro: " + rr.getPerimetro());

        // 2
        Circunferencia c = new Circunferencia(2);
        System.out.println("Raio: " + c.getRaio() + ", Area: " + c.getArea() + ", Perimetro: " + r.getPerimetro());
        Circunferencia cc = new Circunferencia(4);
        System.out.println("Raio: " + c.getRaio() + ", Area: " + c.getArea() + ", Perimetro: " + r.getPerimetro());
    }
}
