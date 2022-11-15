package taxas;

public class Produto implements Taxas{
    private double precoBase = 0.0, precoFinal = 0.0, limite = 2.0;

    // variaveis e metodos
    public void setPrecoBase(double precoBase) {
        this.precoBase = precoBase;
    }

    public void setLimite(double limite){
        this.limite = limite;
    }

    public double preco(){
        if(precoBase > limite){
            precoFinal = precoBase * (1.0 + TAXA3/100);
        }
        return precoFinal;
    }

    public String toString() {
        return "Este produto tem preco de " + this.precoFinal + " e preco base de " + this.precoBase;
    }
}
