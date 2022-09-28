import java.lang.Math.*;

public class Circunferencia {
    //a) Uma variável de instância de acesso privado, raio, com tipo double, e com valor 1 por defeito.
    private double raio = 1;

    //b) Um construtor de instâncias da classe, sem argumentos,
    // que cria uma circunferência padrão (com valores por defeito).
    public Circunferencia(){}

    //c) Um construtor de instâncias da classe que recebe por parâmetro o raio da circunferência a criar.
    public Circunferencia(double raio){
        this.raio = raio;
    }

    //d) Os métodos getter e setter do raio da circunferência.
    public double getRaio() {
        return raio;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    //e) Um método de instância getArea() que retorna a área da circunferência.
    public double getArea(){
        double area = Math.PI * raio * raio;
        return area;
    }

    //f) Um método de instância getPerimetro() que retorna o perímetro da circunferência.
    public double getPerimetro(double altura, double largura){
        double perimetro = 2 * altura + 2 * largura;
        return perimetro;
    }
}
