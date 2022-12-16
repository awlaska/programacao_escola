import java.util.ArrayList;
import java.util.List;

public class Portico {
    //DONE Implemente uma classe Pórtico (apenas os atributos e construtor)
    // para armazenar a informação sobre a passagem de veículos (use o tipo de coleção que considerar mais apropriado).
    // A classe deve incluir métodos para (nota: pode adicionar métodos às classes anteriores se necessário)
    protected List<PassagemVeiculo> passagem;

    public Portico(){
        this.passagem = new ArrayList<>();
    }

    //DOING Adicionar uma nova Passagem de Veículo, sem permitir a duplicação do código de passagem
    // (o método deve lançar uma excepção IllegalArgumentException se o código for duplicado,
    // e neste caso a passagem de veículo não deve ser adicionada);
    
}