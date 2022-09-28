public class Venda{
    private String mes;
    private float pvp;
    private Automovel auto;
    private Cliente comprador;

    public void Venda(String mes, float pvp, Automovel auto){
        this.mes = mes;
        this.pvp = pvp;
        this.auto = auto;
    }

    public float getPvp() {
        return pvp;
    }

    public void setPvp(float pvp) {
        this.pvp = pvp;
    }

    public Automovel getAuto() {
        return auto;
    }

    public void setAuto(Automovel auto) {
        this.auto = auto;
    }

    public Cliente getComprador() {
        return comprador;
    }

    public void setComprador(Cliente comprador) {
        this.comprador = comprador;
    }

    public String getMes(){
        return mes;
    }

    public void setMes(String mes){
        this.mes = mes;
    }
    public void setComprador(){}

    public String getEstado(){
        return "O automovel da marca " + this.auto.getMarca() +
                ", cilindrada " + this.auto.getCilindrada() +
                ", foi vendido no mes " + this.mes +
                ", ao cliente " + this.comprador.getNome() +
                ", por " + this.pvp + " euros.";
    }
}