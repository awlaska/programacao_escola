import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String email = "", emails = "", user = "", escola = "", nomeEscola = "";
        int nr = 0;

        // receber email
        System.out.println("Introduza o seu email: ");
        emails = input.nextLine();
        email = emails;

        // dividir user
        String [] parts1 = email.split("(?<=\\D)(?=\\d)");
        user = parts1[0];
        email = parts1[1];

        // dividir numero mecanografico
        String[] parts2 = email.split("@");
        nr = Integer.parseInt(parts2[0]);
        email = parts2[1];

        // dividir escola
        String[] parts3 = email.split("\\.");
        escola = parts3[0];
        email = parts3[1];

        if(escola.toLowerCase().equals("estg")){
            nomeEscola = "Escola Superior de Tecnologia e Gestão";
        } else if(escola.toLowerCase().equals("ese")){
            nomeEscola = "Escola Superior de Educação";
        } else {
            System.out.println("-1");
        }

        System.out.println("Endereço de email: " + emails + " | Nº mecanogra'fico: " + nr
        + " | Sigla da escola: " + escola.toUpperCase() + " | Nome da escola: " + nomeEscola);
    }
}
