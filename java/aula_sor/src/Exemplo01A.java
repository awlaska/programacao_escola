public class Exemplo01A{
    public static void main(String[] args){
        // Atributos
        Automovel auto1 = new Automovel();
        Automovel auto2 = new Automovel("Renault");
        Automovel auto3 = new Automovel("Opel", "Vermelho", 1.2f);

        auto1.setMarca("Renault");
        auto1.setCilindrada(2.2f);
        auto2.setMarca("Cupra");
        auto3.setMarca("Ford");


        System.out.println("Auto1 tem marca " + auto1.getMarca() +
                ", tem cor " + auto1.getCor() +
                "e tem cilindrada " + auto1.getCilindrada());

        //ou//

        System.out.println("Auto1 " + auto1.getEstado());
        System.out.println("Auto2 " + auto2.getEstado());
        System.out.println("Auto3 " + auto3.getEstado());

        //////

        Cliente cl1 = new Cliente();
        cl1.setNome("Joaquim");
        cl1.setNif(123456789);

        Venda v1 = new Venda();
        v1.setMes("Outubro");
        v1.setPvp(12000);
        v1.setAuto(auto1);
        v1.setComprador(cl1);
        System.out.println(v1.getEstado());
    }
}