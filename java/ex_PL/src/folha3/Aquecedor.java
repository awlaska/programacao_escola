package folha3;

import folha2.ex4.*;

//DONE a) Crie uma classe Aquecedor que é subclasse de/descende de (extends) Ventoinha.
public class Aquecedor extends Ventoinha {
    //DONE b) Um atributo de instância de acesso privado, resistenciaLigada, de tipo boolean,
    // que indica se a sua resistência elétrica se encontra ligada (true) ou não (false). O valor por defeito é false.
    private boolean resistenciaLigada;

    //DONE c) Um atributo de instância de acesso privado, potResistencia, com tipo Velocidade,
    // que indica a quantidade de corrente elétrica submetida à resistência, indicando, portanto,
    // a potência de aquecimento do aquecedor. O valor por defeito é PARADA.
    private Velocidade potResistencia(){
        return this.getVelocidade();
    }

    //TODO d) Um construtor sem parâmetros.

    //TODO e) Os métodos getter e setter para potResistência.

    //TODO f) Um método isResistenciaLigada(), que funciona como getter do atributo 'resistenciaLigada'.

    //TODO g) Um método ligarAquecimento() que liga o aquecimento (resistência elétrica).

    //TODO h) Um método desligarAquecimento() que desliga o aquecimento.

    //TODO i) Um método toString() que devolve uma String com o estado atual do Aquecedor,
    // reutilizando o método herdado para a mesma informação…
}
