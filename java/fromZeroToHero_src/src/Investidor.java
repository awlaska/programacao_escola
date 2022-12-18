import java.util.Date;
import java.util.Map;

public class Investidor {
    private String nome;
    private Date dataAberturaConta;
    private float saldoNãoInvestido;

    private Map<Fundo, Integer> titulosEmCarteira;

    public Investidor(String nome, Date dataAberturaConta, float saldoNãoInvestido) {
        this.nome = nome;
        this.dataAberturaConta = dataAberturaConta;
        this.saldoNãoInvestido = saldoNãoInvestido;
    }

    public String getNome() {
        return nome;
    }

    public Date getDataAberturaConta() {
        return dataAberturaConta;
    }

    public float getSaldoNãoInvestido() {
        return saldoNãoInvestido;
    }

    public void setSaldoNãoInvestido(float saldoNãoInvestido) {
        this.saldoNãoInvestido = saldoNãoInvestido;
    }

    //TODO 5 Vende a quantidade de títulos do fundo, e devolve o valor da venda.
    // Se não tiver em sua posse essa quantidade, lança a Excepção
    public float vender(Fundo fundo, int quantidade) throws FundoException {
        float valorVenda = 0;
        if(this.titulosEmCarteira.containsKey(fundo))
            if(this.titulosEmCarteira.get(fundo) >= quantidade) {
                if(this.titulosEmCarteira.get(fundo) - quantidade == 0) {
                    titulosEmCarteira.remove(fundo);
                }
                else
                    this.titulosEmCarteira.put(fundo, this.titulosEmCarteira.get(fundo) - quantidade);
                valorVenda = fundo.getCotacaoAtual().getValor();
            }
            else
                throw new FundoException("Nao tem fundos suficientes para realizar esta venda!");
        else throw new FundoException("Nao tem o fundo pretendido!");
        return valorVenda;
    }
}
