package cap5;

public class Mamifero extends Animal {
    private int nMesesGestacao;
    public Mamifero(){
        super();
    }
    public int getnMesesGestacao() {
        return nMesesGestacao;
    }
    public void setnMesesGestacao(int nMesesGestacao) {
        this.nMesesGestacao = nMesesGestacao;
    }
}