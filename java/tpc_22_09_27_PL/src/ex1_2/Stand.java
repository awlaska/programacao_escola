package ex1_2;

import java.util.Objects;

public class Stand {
    // a. Um array,‘veiculos’, do tipo Veículo (codificado no exercício anterior);
    private Veiculo[] veiculos;

    // b. Um construtor de instâncias da classe, sem argumentos, que inicializa o array para 50 valores;
    public Stand(){
        this.veiculos = new Veiculo[50];
    }

    // c. Os métodos Getter e Setter para o array;
    public Veiculo[] getVeiculos() {
        return veiculos;
    }

    public void setVeiculos(Veiculo[] veiculos) {
        this.veiculos = veiculos;
    }

    // d. O método adicionarVeiculo(…)que recebe um Veículo e acrescenta-o ao array;
    public void adicionarVeiculo(Veiculo veiculo){
        for(int i = 0; i < 50; i++){
            if(this.veiculos[i] == null){
                this.veiculos[i] = veiculo;
                return;
            }
        }
    }

    // e. O método obterVeiculo(…) que recebe o Modelo do Veículo e devolve esse veículo;
    public String obterVeiculo(String modelo){
        int i = 0;
        for(i = 0; i < 50; i++){
            if (this.veiculos[i].getModelo() == modelo){
                ;
            }
        }
        return veiculos[i].toString();
    }

    // f. O método obterQuantidadeVeiculos(…) que devolve a quantidade de veículo existentes no stand;
    public int obterQuantidadeVeiculos(){
        return veiculos.length;
    }

    // g. O método listarVeiculos(…) que lista todos os veículos de uma dada marca.
    // Se não existir nenhum veículo da marca,
    // deverá apresentar a mensagem “O stand não possui veículos da marca «marca»”,
    // onde «marca» deve ser substituída pela marca passada por argumento.
    public void listarVeiculos(String marca){
        for(int i = 0; i < veiculos.length; i++){
            if(veiculos[i].getMarca().equals(marca)){
                System.out.println(toString());
            }
        }
    }

}
