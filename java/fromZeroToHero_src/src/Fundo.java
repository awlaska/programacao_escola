import java.util.Date;
import java.util.Map;
import java.util.Set;

public abstract class Fundo {
    private String designacao;
    private long qtdTitulos;

    private Set<Ativo> ativos;
    private Map<Date, CotacaoTitulo> cotacoes;

    private Map<Investidor, TituloEmCarteira> titulosDeInvestidores;

    protected Fundo() {
    }

    public String getDesignacao() {
        return designacao;
    }

    public void setDesignacao(String designacao) {
        this.designacao = designacao;
    }

    public long getQtdTitulos() {
        return qtdTitulos;
    }

    public void setQtdTitulos(long qtdTitulos) {
        this.qtdTitulos = qtdTitulos;
    }

    public Set<Ativo> getAtivos() {
        return ativos;
    }

    public Map<Date, CotacaoTitulo> getCotacoes() {
        return cotacoes;
    }

    public Map<Investidor, TituloEmCarteira> getTitulosDeInvestidores() {
        return titulosDeInvestidores;
    }

    //DONE 6 Adiciona Ativo ao Fundo
    public void adicionarAtivo(Ativo ativo) throws FundoException {
        if(this.ativos.contains(ativo))
            throw new FundoException("O ativo já pertence ao fundo!");
        else
            this.ativos.add(ativo);
    }

    //DONE 2 Devolve a cotação mais recente do título deste fundo
    public CotacaoTitulo getCotacaoAtual(){
        Date dtMaisRecente = null;
        for(Date dt : cotacoes.keySet())
            if(dtMaisRecente == null)
                dtMaisRecente = dt;
            else
                if(dtMaisRecente.after(dt))
                    dtMaisRecente = dt;
        return cotacoes.get(dtMaisRecente);
    }

    //DONE 4 O método investir lança a Excepção se o investidor não tiver dinheiro suficiente
    //para comprar a quantidade de títulos
    public void investir(Investidor investidor, int quantidade) throws FundoException
    {
        if(investidor.getSaldoNãoInvestido() >= (quantidade * getCotacaoAtual().getValor()))
            if(titulosDeInvestidores.containsKey(investidor)){
                titulosDeInvestidores.get(investidor).adicionarQuantidade(quantidade);
            }
            else
                new TituloEmCarteira(investidor,this, quantidade);
        else
            throw new FundoException("Saldo nao suficiente!");
    }

}
