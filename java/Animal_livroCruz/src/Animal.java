public class Animal {
    private String nome;
    protected String especie;
    public Animal(){ }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getEspecie() {
        return especie;
    }
    public void setEspecie(String especie) {
        this.especie = especie;
    }
public String toString(){
        return "Animal da espe'cie " + especie + ", com nome " + nome;
    }
}