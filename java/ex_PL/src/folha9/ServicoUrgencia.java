package folha9;

public class ServicoUrgencia {
    //TODO 2. Implemente uma classe ServiçoUrgencia (apenas os atributos e construtor) para armazenar a
    // informação sobre registos de atendimento urgente (use um HashMap que associe o
    // Identificador Único de registo ao Atendimento). A classe deve incluir métodos para (nota:
    // pode adicionar métodos às classes anteriores se necessário):

    //TODO • Adicionar um novo atendimento sem permitir a duplicação de identificador (o método
    // deve lançar uma excepção IllegalArgumentException se o identificador fosse duplicado);
    public void novoAtendimento(){}

    //TODO• Devolver o valor total monetário recebido por todos os atendimentos realizadas no centro
    // de saúde, i.e. a soma das taxas pagas para qualquer tipo de registo de atendimento;
    public double total(){return 0.0;}

    //TODO • Devolver a média dos graus de prioridade dos atendimentos urgentes (não imediatos).
    public double media(){return 0.0;}

}
