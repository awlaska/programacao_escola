package ex5;

public class Climatizador extends Aquecedor{
    //DONE i. Um atributo privado ‘refrigeracaoLigada’, do tipo boolean,
    // que indica se o refrigerador do climatizador está ligado ou não.
    private boolean refrigeracaoLigada = false;

    //DONE ii. Um atributo privado ‘potenciaRefrigerador’ do tipo Velocidade.
    private Velocidade potenciaRefrigerador = Velocidade.BAIXA;

    //DONE iii. Um construtor de instância da classe sem argumentos;
    Climatizador(){}

    //DONE iv. O Getter e Setter para a ‘potenciaRefrigerador’;
    public Velocidade getPotenciaRefrigerador() {
        return potenciaRefrigerador;
    }

    public void setPotenciaRefrigerador(Velocidade velocidade){
        this.potenciaRefrigerador = velocidade;
    }

    //DONE v. O método refrigeracaoLigada() que indica se o refrigerador está ligado ou não.
    // Funciona como Getter para a ‘refrigeracaoLigada’;
    public boolean refrigeracaoLigada(){
        return refrigeracaoLigada;
    }

    //DONE vi. O método ligarRefrigeracao() que liga a refrigeração e desliga o aquecimento;
    public void ligarRefrigeracao(){
        this.refrigeracaoLigada = true;
    }

    //DONE vii. O método desligarRefrigeracao() que desliga a refrigeração (desliga a resistência);
    public void desligarRefrigeracao(){
        this.refrigeracaoLigada = false;
    }

    //DOING viii. O método ligarAquecimento() reescrito, que liga o aquecimento e desliga a refrigeração.
    public void ligarAquecimento(){
        super.ligarAquecimento();
        this.refrigeracaoLigada = false;
    }

    //TODO ix. O método toString() reescrito de modo a apresentar a informação do climatizador;
    public String toString(){
        return super.toString();
    }
}
