public class JaNaoRebenta {
    public static void main(String[] args) {
        int a = 1, b = 0;
        try {
            System.out.println(a/b);
        }
        catch (Exception e) {
            System.out.println("Ocorreu um erro.");
            System.out.println("Programa terminado");
        }
    }
}
