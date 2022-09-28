public class Main {
    public static void main(String args[]){
        Produto p1, p2;

        p1 = new Produto();
        p2 = new Produto("Batatas");

        p1.setNome("Coca Cola");
        p1.setPrecoCusto(1);
        p1.setPrecoVenda(1.2);

        p2.setPrecoCusto(0.5);
        p2.setPrecoVenda(1.1);

        System.out.println("Margem: " + p1.getMargemLucro() + "€");
        System.out.println("Margem: " + p1.getPercentMargemLucro() + "%");

        Venda v = new Venda();

        v.adicionaProduto(p1);
        v.adicionaProduto(p1);
        v.adicionaProduto(p2);

        System.out.println("Total: " + v.calculaTotalVenda());
    }
}
