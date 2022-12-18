import java.util.Date;

public class CotacaoTitulo {
    private Date dataHora;
    private float valor;

    public CotacaoTitulo(Date dataHora, float valor) {
        this.dataHora = dataHora;
        this.valor = valor;
    }

    public Date getDataHora() {
        return dataHora;
    }

    public void setDataHora(Date dataHora) {
        this.dataHora = dataHora;
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }
}
