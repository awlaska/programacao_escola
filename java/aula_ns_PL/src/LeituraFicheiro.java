import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class LeituraFicheiro {
    public static void main(String[] args) {
        File file = new File("src/Ficheiros/textInput.txt");
        Scanner scanner = null;
        try{
            scanner = new Scanner(file);
            while(scanner.hasNext()){
                int num = scanner.nextInt();
                System.out.println("Numero inteiro lido: " + num);
                System.out.println(scanner.next());
            }
        }
        catch(InputMismatchException e){
            System.out.println("Mismatch exception: " + e);
        }
        catch(FileNotFoundException e){
            System.out.println("Ficheiro nao encontrado!");
            System.exit(0);
        }
    }
}
