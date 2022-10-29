package herancas;

public class main {
        public static void main(String[] args) {
                Fig2D fig1, fig2;

                fig1 = new Retangulo();
                if(fig1 instanceof Retangulo){
                        ((Retangulo)fig1).setLado1(5);
                        ((Retangulo)fig1).setLado2(3);
                }

                fig2 = new Quadrado();

                if(fig2 instanceof Quadrado){
                        ((Quadrado)fig2).setLado1(5);
                        ((Quadrado)fig2).setLado2(3);
                }

                System.out.println(fig1.getArea());
                System.out.println(fig2.getArea());
        }
}
