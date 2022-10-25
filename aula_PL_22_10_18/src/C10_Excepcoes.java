public class C10_Excepcoes {
    public static void calcula() throws ArithmeticException {
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
