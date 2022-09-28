public class Automovel{
    // Atributos
    private String marca;
    private String cor;
    private float Cilindrada;

    // Constructors
    public Automovel(){}
    public Automovel(String marca){this.marca = marca;}
    public Automovel(String marca, String cor, Float Cilindrada){
        this.marca = marca;
        this.cor = cor;
        this.Cilindrada = Cilindrada;
    }

    // Métodos
    public String getMarca(){
        return this.marca;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }
    public String getCor(){
        return this.cor;
    }
    public void setCor(String cor){
        this.cor = cor;
    }
    public float getCilindrada(){
        return this.Cilindrada;
    }
    public void setCilindrada(float Cilindrada){
        this.Cilindrada = Cilindrada;
    }

    public String getEstado(){
        return "O automóvel tem marca " + this.getMarca() + ", tem cor " + this.getCor() + " e tem cilindrada "
                + this.getCilindrada();
    }
}
