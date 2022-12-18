import java.util.Date;

public class ContratoArrendamento {
    private Date dataInicio;
    private Date dataFim;
    private float valorRendaMensal;

    private ClienteContratoArrend cliente;

    public ContratoArrendamento(Date dataInicio, Date dataFim, float valorRendaMensal) {
        this.dataInicio = dataInicio;
        this.dataFim = dataFim;
        this.valorRendaMensal = valorRendaMensal;
    }

    public Date getDataInicio() {
        return dataInicio;
    }

    public void setDataInicio(Date dataInicio) {
        this.dataInicio = dataInicio;
    }

    public Date getDataFim() {
        return dataFim;
    }

    public void setDataFim(Date dataFim) {
        this.dataFim = dataFim;
    }

    public float getValorRendaMensal() {
        return valorRendaMensal;
    }

    public void setValorRendaMensal(float valorRendaMensal) {
        this.valorRendaMensal = valorRendaMensal;
    }
}
