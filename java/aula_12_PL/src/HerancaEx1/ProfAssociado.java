package HerancaEx1;

public class ProfAssociado extends Professor{
    protected double vencimento_hora;
    protected int total_horas;

    public ProfAssociado(String n, String m, int i, int h, double vs) {
        super(n, m, i);
        if(h > 0) total_horas = h;
        if(vs > 0) vencimento_hora = vs;
    }

    public double retornaSalario() {
        double vencimento_base = vencimento_hora * total_horas;
        return vencimento_base - (vencimento_base * 0.16);
    }
}
