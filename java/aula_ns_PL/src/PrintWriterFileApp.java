import java.io.*;
import java.util.Formatter;

public class PrintWriterFileApp {
    public static void main(String[] args) {
        File file = null;
        file = new File("src/Ficheiros/textOutput.txt");
        Formatter formatter;

        try{
            formatter = new Formatter(file);
            formatter.format("Saida com PrintWriter. %n");
            formatter.format("tipos primitivos convertidos em String: %n");
            boolean a_boolean = false;
            int an_int = 1234567;
            double a_double = -4.297e-15;
            formatter.format("boolean = %9b %n", a_boolean);
            formatter.format("int = %9d %n", an_int);
            formatter.format("double = %9.2e %n", a_double);
            formatter.flush();
            formatter.close();
        } catch (IOException ioe) {
            System.out.println("IO Exception");
        }
    }
}