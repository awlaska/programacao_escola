package HerancaEx1;

public class ProfRegime extends Professor{
    protected double vencimento;

    public ProfRegime(String n, String m, int i, double vs) {
        super(n, m, i);
        if(vs > 0) vencimento = vs;
    }

    public double retornaSalario(){
        return vencimento - (vencimento * 0.16);
    }
}