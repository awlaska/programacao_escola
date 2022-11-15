package folha2.ex4;

public class Ventoinha {
    //DONE a) Uma variável de instância de acesso privado, ligado,
    // com tipo boolean, que indica se a ventoinha está ligada (true) ou não (false). O valor por defeito é false.
    private boolean ligado = false;

    //DONE c) Uma variável de instância de acesso privado, velocidade, com tipo Velocidade. O valor por defeito é PARADA.
    private Velocidade velocidade = Velocidade.PARADA;

    //DONE d) Um construtor sem parâmetros.
    public Ventoinha(){}

    //DONE e) Os métodos getter e setter para a velocidade.
    public Velocidade getVelocidade() {
        return velocidade;
    }

    public void setVelocidade(Velocidade velocidade) {
        this.velocidade = velocidade;
    }

    //DONE f) Um método isLigado(), que funciona como getter do atributo 'ligado'.
    public boolean isLigado(){
        return this.ligado;
    }

    //DONE g) Um método ligar() que liga a ventoinha e coloca a velocidade em BAIXA.
    public void ligar(){
        this.ligado = true;
    }

    //DONE h) Um método desligar() que desliga a ventoinha e coloca a velocidade em PARADA.
    public void desligar(){
        this.ligado = false;
    }

    //DONE i) Um método toString() que devolve uma String com o estado atual da ventoinha.
    @Override
    public String toString(){
        return "A ventoinha está " + (this.ligado ? "ligada" : "desligada")
                + " com velocidade" + this.velocidade;
    }
}
