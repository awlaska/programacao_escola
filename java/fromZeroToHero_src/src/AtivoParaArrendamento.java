import java.util.ArrayList;
import java.util.List;

public class AtivoParaArrendamento extends Ativo {
    private List<ContratoArrendamento> contratos;

    public AtivoParaArrendamento(Fundo fundo, String local) throws Exception {
        super();
        if (fundo instanceof FundoDeArrendamento){
            this.setFundo(fundo);
            this.setLocal(local);
            this.contratos = new ArrayList<>();
        }
        else
            throw new Exception("Fundo não é de Arrendamento!!!");
    }
}
