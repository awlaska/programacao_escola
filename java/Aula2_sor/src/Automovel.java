    // public class - Visível par todas as classes, packages, subclasses e mundo
public class Automovel{
    // private - Não pode ser acessado por classes ou métodos externos
    // declarar as variaveis
    private String marca;
    private String cor;
    private float cilindrada;

    //
    public Automovel(){}
        // atribuir valor a variaveis
    public Automovel(String marca){
        this.marca = marca;
    }

        public Automovel(String marca, String cor, String cilindrada) {
        }

        public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public float getCilindrada() {
        return cilindrada;
    }

    public void setCilindrada(float cilindrada) {
        this.cilindrada = cilindrada;
    }

    public String getEstado(){
        return " tem marca " + this.getMarca() +
                ", tem cor " + this.getCor() +
                "e tem cilindrada " + this.setCilindrada();
    }

    private String setCilindrada() {
        return this.cilindrada;
    }
}