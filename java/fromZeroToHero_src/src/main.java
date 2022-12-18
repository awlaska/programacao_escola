// DONE 7

import java.sql.Date;
import java.text.DateFormat;

import static java.time.LocalTime.now;

public class main {
    public static void main(String[] args) throws FundoException {
        //DONE Crie um objeto de tipo FundoDeImoveis;
        Fundo fundoImoveis = new FundoDeImoveis();
        // Adicione um Ativo ao Fundo;
        Ativo ativo = new Ativo();
        fundoImoveis.adicionarAtivo(ativo);
        // Adicione ao Fundo, duas cotações de datas diferentes;
        fundoImoveis.getCotacoes().put(new Date(2011, 8, 10), new CotacaoTitulo(new Date (2011, 8, 10), 200f));
        fundoImoveis.getCotacoes().put(new Date(2010,11,12), new CotacaoTitulo (new Date(2010,11,12), 100f));
        // Crie um Investidor;
        Investidor investidor = new Investidor("Joao", new Date(2009, 12, 20), 1000);

        // Crie um investimento desse investidor, no fundo anteriormente criado;
        fundoImoveis.investir(investidor, 100);

        // Liste para o ecrã, a carteira de títulos do investidor.
        try{

        }
        catch(FundoException fe){
            new FundoException("Nao valido!");
        }
        for(Fundo f : investidor.getTitulosEmCarteira().keySet())
            f.getTitulosDeInvestidores();
    }
}