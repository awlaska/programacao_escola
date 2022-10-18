package parte1;

public class main {
    public static void main(String[] args) {
        System.out.println("Info do ecoponto -> " + ecoponto.getInfo());

        LocalEcoPontos local = new LocalEcoPontos("Rua Central", 37, 47);

        local.getEcoponto().addVerde(400);

        System.out.println(local.getInfo());
    }
}
