package ex1;

public class main {
    public static void main(String[] args) {
        Repositorio repo = new Repositorio;
        repo = Repositorio.desserialize("...");
        // ...
        repo.serialize("...");
    }
}