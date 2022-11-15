package taxas;
import taxas.Produto;

public class main {
    public static void main(String[] args) {
        Produto p = new Produto();

        p.setPrecoBase(20.0);
        p.preco();
        System.out.println(p);
    }
}
