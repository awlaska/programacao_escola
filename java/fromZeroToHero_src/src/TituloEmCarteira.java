public class TituloEmCarteira {
    private Investidor investidor;
    private Fundo fundo;
    private int quantidade;

    public TituloEmCarteira(Investidor investidor, Fundo fundo, int quantidade) {
        this.investidor = investidor;
        this.fundo = fundo;
        this.quantidade = quantidade;
    }

    public Investidor getInvestidor() {
        return investidor;
    }

    public Fundo getFundo() {
        return fundo;
    }

    public int getQuantidade() {
        return quantidade;
    }

    //TODO
    public void adicionarQuantidade(int quantidade){
        this.quantidade += quantidade;
    }
}
