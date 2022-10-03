package ex1_2;

public class main {
    public static void main(String[] args) {

        Veiculo v1 = new Veiculo("Mercedes", "Benz", 2000);
        v1.setPrecoInicial(100000.0);
        Veiculo v2 = new Veiculo("Renault", "Clio", 1994);
        v2.setPrecoInicial(5000.0);

        System.out.println("v1 - " + v1);

        // 1. Modifique a função main() de modo a testar a classe criada. Crie um Veículo,
        // altere os valores dos seus atributos, veja a informação do veículo criado e
        // obtenha o preço do mesmo 3 anos após o lançamento.

        Veiculo v3 = new Veiculo("Citroen", "C1", 2005);
        v3.setPrecoInicial(10000.0);
        System.out.println(v3.toString());

        System.out.println("O preço do veículo, depois de 3 anos no mercado, está a " + v3.getPrecoVeiculo(2008)
                + " euros");

        // 2. Modifique a função main() de modo a testar a classe criada. Adicione veículos ao
        // array, obtenha um veículo pela marca, e obtenha a quantidade de veículos
        // existente no stand.

        Stand.adicionarVeiculo("Opel", "Corsa", 2010, 20000);

        Stand.obterVeiculo("Corsa");

        Stand.obterQuantidadeVeiculos();
    }
}