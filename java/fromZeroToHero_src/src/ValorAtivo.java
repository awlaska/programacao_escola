import java.util.Date;

public class ValorAtivo {
    private Ativo ativo;
    private Date data;
    private float valor;

    public ValorAtivo(Ativo ativo, Date data, float valor) {
        this.ativo = ativo;
        this.data = data;
        this.valor = valor;
    }

    public Ativo getAtivo() {
        return ativo;
    }

    public Date getData() {
        return data;
    }

    public void setData(Date data) {
        this.data = data;
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }
}
