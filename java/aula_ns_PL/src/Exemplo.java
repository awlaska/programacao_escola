import java.io.File;

public class Exemplo {
    public static void main(String[] args) {
        File meuFicheiro = new File("src/Ficheiros/dados.dat");
        if (meuFicheiro.exists())
            System.out.println("dados.dat existe");
        else
            System.out.println("dados.dat nao existe");
    }
}