package folha3;

import folha2.ex4.Ventoinha;

    //DONE a) Crie uma classe Climatizador que é subclasse de/descende de (extends) Aquecedor.
public class Climatizador extends Ventoinha{
    //DONE b) Um atributo de instância de acesso privado, refrigeraçãoLigada, de tipo boolean,
    // que indica se o refrigerador se encontra ligado (true) ou não (false). O valor por defeito é false.
    private boolean refrigeracaoLigada = false;

    //TODO c) Um atributo de instância de acesso privado, potRefrigerador, com tipo Velocidade,
    // que indica a quantidade de corrente elétrica submetida ao refrigerador, indicando, portanto,
    // a potência de refrigeração do refrigerador. O valor por defeito é PARADA.

    //TODO d) Um construtor sem parâmetros.

    //TODO e) Os métodos getter e setter para potRefrigerador.

    //TODO f) Um método isRefrigeracaoLigada(), que funciona como getter do atributo 'refrigeracaoLigado'.

    //TODO g) Um método ligarRefrigeracao() que liga a refrigeração e desliga o aquecimento (resistência elétrica).

    //TODO h) Um método desligarRefrigeracao() que desliga a refrigeração.

    //TODO i) Um novo método ligarAquecimento(), que se sobrepõe ao método herdado, com a mesma assinatura,
    // e desliga a refrigeração quando liga o aquecimento (resistência elétrica).

    //TODO j) Um método toString() que se sobrepõe ao herdado e devolve uma String com o estado atual do Climatizador,
    // reutilizando o método herdado para a mesma informação…
}
