package ex1_2;

public class Retangulo {
    // 1.a) Dois atributos de acesso privado, largura e altura, com tipo double, e com valor 1 por defeito.
    private double largura = 1;
    private double altura = 1;

    // 1.b) Um atributo privado de tipo String, cor, com valor “Branco” por defeito.
    private String cor = "Branco";

    // 1.c) Um construtor de instâncias da classe, sem argumentos,
    // que cria um retângulo padrão (com valores por defeito).
    public void Retangulo(){};

    // 1.d) Um construtor de instâncias da classe que recebe por parâmetro a largura e altura do retângulo a criar.
    public Retangulo(double largura, double altura){
        this.largura = largura;
        this.altura = altura;
    }

    // 1.e) Os métodos getters e setters dos três atributos definidos anteriormente.
    public double getLargura() {
        return largura;
    }

    public void setLargura(double largura) {
        this.largura = largura;
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    // 1.f) Um método de instância getArea() que retorna a área do retângulo.
    public double getArea(){
        double area = altura * largura;
        return area;
    }

    // 1.g) Um método de instância getPerimetro() que retorna o perímetro do retângulo.
    public double getPerimetro(){
        double perimetro = 2 * altura + 2 * largura;
        return perimetro;
    }
}
