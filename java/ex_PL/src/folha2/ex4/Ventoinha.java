package folha2.ex4;

public class Ventoinha {
    //DONE a) Uma variável de instância de acesso privado, ligado,
    // com tipo boolean, que indica se a ventoinha está ligada (true) ou não (false). O valor por defeito é false.
    private boolean ligado = false;

    //DONE c) Uma variável de instância de acesso privado, velocidade, com tipo Velocidade. O valor por defeito é PARADA.
    private Velocidade velocidade = Velocidade.PARADA;

    //DONE d) Um construtor sem parâmetros.
    Ventoinha(){}

    //DONE e) Os métodos getter e setter para a velocidade.
    public Velocidade getVelocidade() {
        return velocidade;
    }

    public void setVelocidade(Velocidade velocidade) {
        this.velocidade = velocidade;
    }

    //f) Um método isLigado(), que funciona como getter do atributo 'ligado'.
    //g) Um método ligar() que liga a ventoinha e coloca a velocidade em BAIXA.
    //h) Um método desligar() que desliga a ventoinha e coloca a velocidade em PARADA.
    //i) Um método toString() que devolve uma String com o estado atual da ventoinha.

}
