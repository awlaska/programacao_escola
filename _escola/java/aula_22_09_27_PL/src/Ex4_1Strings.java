import java.util.Scanner;

public class Ex4_1Strings {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s;
        char c;
        int i, nEsp = 0;

        // ler uma linha
        System.out.println("Escreva uma linha de texto: ");
        s = input.nextLine();

        // mostrar o tamanho da linha em carateres
        System.out.print("A linha tem " + s.length() + " carateres, sendo que, desses " + s.length());
        // mostrar o nr de espaços
        for(i=0; i<s.length(); i++){
            c = s.charAt(i);
            if(c == ' '){
                nEsp++;
            }
        }
        System.out.println(" carateres, " + nEsp + " são espaços.");
    }
}