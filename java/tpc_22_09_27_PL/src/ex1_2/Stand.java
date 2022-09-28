package ex1_2;

import java.util.Arrays;
import java.util.Scanner;

public class Stand {
    // a. Um array,‘veiculos’, do tipo Veículo (codificado no exercício anterior);
    Veiculo veiculos[];

    // b. Um construtor de instâncias da classe, sem argumentos, que inicializa o array para 50 valores;
    public Stand(){
        veiculos = new Veiculo[50];
    }

    // c. Os métodos Getter e Setter para o array;
    public Veiculo[] getVeiculos() {
        return veiculos;
    }

    public void setVeiculos(Veiculo[] veiculos) {
        this.veiculos = veiculos;
    }

    // d. O método adicionarVeiculo(…)que recebe um Veículo e acrescenta-o ao array;
    public void adicionarVeiculo(){
        Scanner input = new Scanner(System.in);
        System.out.println("Insira a marca: ");
        String marca = input.nextLine();
        System.out.println("Insira o modelo: ");
        String modelo = input.nextLine();
        System.out.println("Insira o ano de lançamento: ");
        int ano = input.nextInt();
        System.out.println("Insira o preco inicial: ");
        double preco = input.nextInt();

        Veiculo veicul = new Veiculo();
        veicul.setMarca(marca);
        veicul.setModelo(modelo);
        veicul.setAnoDeLancamento(ano);
        veicul.setPrecoInicial(preco);
    }

    // e. O método obterVeiculo(…) que recebe o Modelo do Veículo e devolve esse veículo;
    public Veiculo obterVeiculo(){
        Scanner input = new Scanner(System.in);
        System.out.println("Insira o modelo que deseja encontrar: ");
        String modelo = input.nextLine();
        int i = 0;

        while(modelo != veiculo[i]){
            i++;
        }
        System.out.println(veiculos[i]);
        return veiculos;
    }

    // f. O método obterQuantidadeVeiculos(…) que devolve a quantidade de veículo existentes no stand;
    public int obterQuantidadeVeiculos(){
        return int count;
    }

    // g. O método listarVeiculos(…) que lista todos os veículos de uma dada marca.
    // Se não existir nenhum veículo da marca,
    // deverá apresentar a mensagem “O stand não possui veículos da marca «marca»”,
    // onde «marca» deve ser substituída pela marca passada por argumento.
}
