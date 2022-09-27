import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
      int i = 0, j = 0, total;
      Scanner scan = new Scanner(System.in);
      Scanner numeros = new Scanner(System.in);

      System.out.println("Quantos dados quer guardar? ");
      total = scan.nextInt();

      String[] dados = new String[total];

      System.out.println("Insira os valores: ");

      // Guardar os dados no array
      while (i < total) {
         for(i = 0; i < total; i++){
            dados[i] = numeros.nextLine();
         }
      }

      i = 0;

      System.out.println("\nOs dados: ");

      // Escrever os dados do array
      while(i < total){
         for(i = 0; i < total; i++){
            System.out.println(dados[i]);
         }
      }
   }
}