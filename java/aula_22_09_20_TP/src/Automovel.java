public class Automovel {
    // Atributos
    private String marca;
    private String modelo = "";
    public int anoMatr;
    private String matricula;

    // Constructors
    public Automovel(){
        this.marca = "N/A";
    }
    public Automovel(String marca, String modelo){
        this.marca = marca;
        this.modelo = modelo;
    }

    // Métodos
    public String getMarca(){
        return marca;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAnoMatr() {
        return anoMatr;
    }

    public void setAnoMatr(int anoMatr) {
        this.anoMatr = anoMatr;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }



    public String getInfo(){
        String resposta = "";
        if(modelo.isEmpty()){
            resposta = "A marca é: " + this.marca;
        }else{
            resposta = "A marca é: " + this.marca + " e o modelo é: " + this.modelo;
        }
        return resposta;
    }
}
