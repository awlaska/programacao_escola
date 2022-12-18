public class Ativo {
    private String local;
    private Fundo fundo;

    public Ativo(){}

    public Ativo(Fundo fundo, String local) {
        this.fundo = fundo;
        this.local = local;
    }

    public Ativo(Fundo fundo) {
        this.fundo = fundo;
    }

    public String getLocal() {
        return local;
    }

    public void setLocal(String local) {
        this.local = local;
    }

    public Fundo getFundo() {
        return fundo;
    }

    public void setFundo(Fundo fundo) {
        this.fundo = fundo;
    }
}
