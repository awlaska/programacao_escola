import java.util.Set;

public class FundoDeArrendamento extends Fundo {

    public FundoDeArrendamento(){
        super();
    }

    //DONE 1
    public Set<AtivoParaArrendamento> getAtivosParaArrendamento(){
        Set<AtivoParaArrendamento> conjunto = null;
        for(Ativo ativo : this.getAtivos())
            if(ativo instanceof AtivoParaArrendamento)
                conjunto.add((AtivoParaArrendamento) ativo);
        return conjunto;
    }
}