package parte1;

public class LocalEcoPontos {
    // A informação a armazenar deverá incluir um identificador do local do ecoponto (string),
    // o valor da coordenada X e da coordenada Y da sua localização geográfica (inteiros)
    // e um objeto do tipo parte1.Recolhas para armazenar as quantidades recolhidas por tipo de resíduos.
    String idLocal = "";
    int coordx = 0, coordy = 0;
    
    // um construtor que recebe o identificador e as coordenadas como parâmetros;
    public LocalEcoPontos(String idLocal, int coordx, int coordy){
        this.idLocal = idLocal;
        this.coordx = coordx;
        this.coordy = coordy;
    }

    // métodos de acesso;
    public String getIdLocal(){
        return this.idLocal;
    }
    public int getCoordx(){
        return this.coordx;
    }
    public int getCoordy(){
        return this.coordy;
    }

    // método de mutação que permite alterar as coordenadas de localização geográfica;
    public void setIdLocal(String idLocal){
        this.idLocal = idLocal;
    }
    public void setCoordx(int coordx){
        this.coordx = coordx;
    }
    public void setCoordy(int coordy){
        this.coordy = coordy;
    }

    // um método que imprime a descrição completa do local com ecopontos, incluindo as quantidades recolhidas.
    public String getInfo(){
        return "Local de ecopontos com ID" + this.idLocal +
                "\nCoord x: " + this.coordx +
                "\nCoord y: " + this.coordy +
                "\n e recolheu " +
                "\n lixo verde: " + getEcoponto().getQtVerde +
                "\n lixo amarelo: " + getEcoponto().getQtAmarelo +
                "\n lixo azul: " + getEcoponto().getQtAzul;
    }

    public LocalEcoPontos getEcoponto() {
        return Ecoponto;
    }
}
