public class Venda{
    private String mes;
    private Float pvp;
    private Automovel auto;
    private Cliente comprador;

    public Venda(){}
    public Venda(String mes, float pvp, Automovel auto){
        this.mes = mes;
        this.pvp = pvp;
        this.auto = auto;
    }

    public String getMes(){
        return mes;
    }

    public void setMes(String mes){
        this.mes = mes;
    }

    public String getEstado(){
        return "O automovel da marca " + this.auto.getMarca() +
                ", cilindrada " + this.auto.getCilindrada() +
                ", foi vendido no mes " + this.mes +
                ", ao cliente " + this.comprador.getNome() +
                ", por " + this.pvp + " euros.";
    }

}