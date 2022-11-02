package ex5;

public class main {
    //TODO Modifique a função main() de modo a testar as classes e métodos criados.
    public static void main(String[] args) {
        // Ventoinha
        Ventoinha vent = new Ventoinha();
        vent.VentoinhaLigada();
        vent.ligar();
        vent.setVelocidadeVentoinha(Velocidade.ALTA);
        vent.VentoinhaLigada();
        vent.desligar();
        vent.toString();

        // Aquecedor
        Aquecedor aque = new Aquecedor();
        aque.ResistenciaLigada();
        aque.ligar();
        aque.setVelocidadeVentoinha(Velocidade.MEDIA);
        aque.ligarAquecimento();

        aque.toString();


        // Climatizador
    }
}
