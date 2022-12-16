import java.io.FileNotFoundException;
import java.io.PrintWriter;

public class PrintWriterFileApp1 {
    public static void main(String[] args) throws FileNotFoundException {
        PrintWriter pw = new PrintWriter("src/Ficheiros/textOutput1.txt");
        pw.println("hello");
        pw.close();
    }
}