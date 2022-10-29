package ex1_2;

public class main {
    public static void main(String[] args) {
        // 1. Modifique a função main() de modo a testar a classe criada. Crie um Veículo,
        // altere os valores dos seus atributos, veja a informação do veículo criado e
        // obtenha o preço do mesmo 3 anos após o lançamento.
        Veiculo mercedes = new Veiculo();
        mercedes.setMarca("Mercedes");
        mercedes.setModelo("abc");
        mercedes.setAnoDeLancamento(2015);
        mercedes.setPrecoInicial(15000.0);

        System.out.println(mercedes.toString());

        Veiculo bmw = new Veiculo("BMW", "cba", 2017);
        bmw.setPrecoInicial(20000.0);

        System.out.println(bmw);

        System.out.println("Preco em 2020: " + bmw.getPrecoVeiculo(2020));

        // 2. Modifique a função main() de modo a testar a classe criada. Adicione veículos ao
        // array, obtenha um veículo pela marca, e obtenha a quantidade de veículos
        // existente no stand.

        Stand stand = new Stand();
        stand.adicionarVeiculo(mercedes);
        stand.adicionarVeiculo(bmw);
    }
}