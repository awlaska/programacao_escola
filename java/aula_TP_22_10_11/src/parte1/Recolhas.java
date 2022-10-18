package parte1;

public class Recolhas {
    private double qtVerde; // Quantidade recolhida no ecoponto verde
    private double qtAmarelo; // Quantidade recolhida no ecoponto amarelo
    private double qtAzul; // Quantidade recolhida no ecoponto azul

    public Recolhas() {
        qtVerde = 0;
        qtAmarelo = 0;
        qtAzul = 0;
    }

    // retornar o valor da quantidade recolhida para cada tipo de ecoponto (métodos de acesso);
    public double getQtVerde() {
        return qtVerde;
    }

    public double getQtAmarelo() {
        return qtAmarelo;
    }

    public double getQtAzul() {
        return qtAzul;
    }

    // adicionar quantidades recolhidas para cada tipo de ecoponto;
    public void setQtVerde(double qtVerde) {
        this.qtVerde += qtVerde;
    }

    public void setQtAmarelo(double qtAmarelo) {
        this.qtAmarelo += qtAmarelo;
    }

    public void setQtAzul(double qtAzul) {
        this.qtAzul += qtAzul;
    }

    // retornar a quantidade total recolhida de resíduos em todos os tipos de ecopontos;
    public double getTotal(){
        return this.qtAmarelo + this.qtVerde + this.qtAzul;
    }

    // imprimir as quantidades recolhidas por tipo de ecoponto


    // e a quantidade total recolhida em todos os tipos de ecoponto.
    public String getInfo(){
        return "Quantidade total recolhida em casa tipo de ecoponto: \n" +
                "Ecoponto amarelo: " + this.qtAmarelo +
                "\nEcoponto azul" + this.qtAzul +
                "\nEcoponto verde: " + this.qtVerde +
                "\n sendo no total: " + this.getTotal();
    }
}