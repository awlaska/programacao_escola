package folha3;

import folha2.ex4.Velocidade;
import folha2.ex4.Ventoinha;

    //DONE a) Crie uma classe Climatizador que é subclasse de/descende de (extends) Aquecedor.
public class Climatizador extends Ventoinha{
    //DONE b) Um atributo de instância de acesso privado, refrigeraçãoLigada, de tipo boolean,
    // que indica se o refrigerador se encontra ligado (true) ou não (false). O valor por defeito é false.
    private boolean refrigeracaoLigada = false;

    //DONE c) Um atributo de instância de acesso privado, potRefrigerador, com tipo Velocidade,
    // que indica a quantidade de corrente elétrica submetida ao refrigerador, indicando, portanto,
    // a potência de refrigeração do refrigerador. O valor por defeito é PARADA.
    private Velocidade potRefrigerador = Velocidade.PARADA;

    //DONE d) Um construtor sem parâmetros.
    public Climatizador(){}

    //DONE e) Os métodos getter e setter para potRefrigerador.
    public Velocidade getPotRefrigerador() {
        return potRefrigerador;
    }

    public void setPotRefrigerador(Velocidade potRefrigerador) {
        this.potRefrigerador = potRefrigerador;
    }

    //DONE f) Um método isRefrigeracaoLigada(), que funciona como getter do atributo 'refrigeracaoLigado'.
    public boolean isRefrigeracaoLigada(){
        return this.refrigeracaoLigada;
    }

    //DOING g) Um método ligarRefrigeracao() que liga a refrigeração e desliga o aquecimento (resistência elétrica).
    public void ligarRefrigeracao(){
        this.refrigeracaoLigada = true;
        Aquecedor.desligarAquecimento();
    }

    //DONE h) Um método desligarRefrigeracao() que desliga a refrigeração.
    public void desligarRefrigeracao(){
        this.refrigeracaoLigada = false;
    }

    //DOING i) Um novo método ligarAquecimento(), que se sobrepõe ao método herdado, com a mesma assinatura,
    // e desliga a refrigeração quando liga o aquecimento (resistência elétrica).
    @Override
    public void ligarAquecimento() {
        this.refrigeracaoLigada = false;
        Aquecedor.ligarAquecimento();
    }

    //DONE j) Um método toString() que se sobrepõe ao herdado e devolve uma String com o estado atual do Climatizador,
    // reutilizando o método herdado para a mesma informação…
    public String toString(){
        return super.toString() + "e o climatizador está " + (this.refrigeracaoLigada ? "ligada" : "desligada")
                + " e com a potencia " + this.potRefrigerador;
    }
}
