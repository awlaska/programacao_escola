package ex1_2;

import org.testng.annotations.Test;

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

    //TODO d. O método adicionarVeiculo(…)que recebe um Veículo e acrescenta-o ao array;
    public void adicionarVeiculo(Veiculo veiculo){
        for(Veiculo veic : veiculos){
            if(veic == null){
                veic = veiculo;
                System.out.println(veiculo.toString());
                System.out.println(veic.toString());
                return;
            }
        }
    }

    //TODO e. O método obterVeiculo(…) que recebe o Modelo do Veículo e devolve esse veículo;
    public String obterVeiculo(String modelo){
        for(Veiculo veic : veiculos){
            if (veic.getModelo().equals(modelo)){
                return veic.toString();
            }
        }
        return null;
    }

    //TODO f. O método obterQuantidadeVeiculos(…) que devolve a quantidade de veículo existentes no stand;
    public int obterQuantidadeVeiculos(){
       /* int i = 0;
        for(Veiculo veic : veiculos){
            if(veic.getMarca() != null)
                i++;
        }
        return i;*/
        int x = 0;
        for (int i=0; i<veiculos.length; i++){
            if (veiculos[i]!=null){
                x++;
            }
        }

        return x;
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
