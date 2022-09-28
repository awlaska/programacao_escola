public class Main {
    public static void main(String[] args){
        Automovel x, y, z;

        x = new Automovel();
        System.out.println("A marca é: " + x.getMarca());
        x.setMarca("Renault");
        System.out.println(x.getInfo());

        y = new Automovel("Opel", "Corsa");
        System.out.println(x.getInfo());

        /*
        y = x;
        z = new Automovel();
        z.setMarca("Renault");
        x.marca = "Citroen";
        x.cor = "Amarelo";
        x.setMarca("Citroen");*/
    }
}
