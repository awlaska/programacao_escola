public class Peixe extends Animal{
    protected float comprimento;
    public Peixe(){
        super();
    }
    public float getComprimento() {
        return comprimento;
    }
    public void setComprimento(float comprimento) {
        this.comprimento = comprimento;
    }
    public String toString(){
        return super.toString() + ". Peixe de comprimento " + comprimento;
    }
}