public class Ventoinha {
    // a) boolean - ventoinha ligada ou desligada
    private boolean ligado = false;

    // c) variável de acesso provado velocidade do tipo Velocidade. valor de defeito PARADA
    private Velocidade velocidade = Velocidade.PARADA;

    // d) construtor sem parâmetros
    public Ventoinha(){}

    // e) métodos getter e setters para a velocidade

    public Velocidade getVelocidade() {
        return velocidade;
    }

    public void setVelocidade(Velocidade velocidade) {
        this.velocidade = velocidade;
    }

    // f) método isLigado() que funciona como getter do atributo ligado
    public boolean isLigado(){
        return ligado;
    }

    // g) método ligar() que liga a ventoinha
    public void ligar(){
        this.ligado = true;
        this.velocidade = Velocidade.BAIXA;
    }

    // h) método desligar() que desliga a ventoinha e coloca velocidade em PARADA
    public void desligar(){
        this.ligado = false;
        this.velocidade = Velocidade.PARADA;
    }

    // i) método toString() que devolve uma string com o estado atual da ventoinha
    public String toString(){
        return "A ventoinha está "+ (this.ligado?"ligada":"desligada") + "e a sua velocidade é " + this.velocidade;
    }

}