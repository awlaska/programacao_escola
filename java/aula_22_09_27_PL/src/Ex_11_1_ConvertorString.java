import java.util.Scanner;

public class Ex_11_1_ConvertorString {
    public static void main(String[] args) {
        double d;
        int i;
        String s;

        Scanner input = new Scanner(System.in);

        // ler uma string
        System.out.println("Escreva uma linha de texto: ");
        s = input.nextLine();

        // converter a string para numero real
        d = Double.parseDouble(s);
        System.out.println("Conversao String -> double: d = " + d);

        // converter a string para numero inteiro
        i = Integer.parseInt(s);
        System.out.println("Conversao String -> int: i = " + i);

        // converter um numero real para uma string
        s = Double.toString(d + 20);
        System.out.println("Conversao double -> String: s = d + 20 -> " + s);

        // converter um numero inteiro para uma string
        s = Integer.toString(i + 10);
        System.out.println("Conversao int -> String: s = i + 10 -> " + s);
    }
}
