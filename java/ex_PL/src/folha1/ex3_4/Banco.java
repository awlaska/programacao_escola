package folha1.ex3_4;

public class Banco {
    //DONE a) Um array, contas, de objetos do tipo ContaBancária (ver exercício anterior).
    private ContaBancaria[] contas;

    //DONE b) Um construtor de instâncias da classe, sem parâmetros, que inicializa o array para cem itens.
    public Banco(){
        contas = new ContaBancaria[100];
    }

    //DONE c) Os métodos getters e setters para o array contas.
    public ContaBancaria[] getContas() {
        return contas;
    }

    public void setContas(ContaBancaria[] contas) {
        this.contas = contas;
    }

    //DONE d) O método criaConta(…) que recebe uma contaBancária por parâmetro e acrescenta ao array.
    public int criaConta(ContaBancaria conta){
        for(ContaBancaria c : contas){
            if(c == null){
                c = conta;
                return 0;
            }
        }
        return -1;
    }

    //DONE e) O método getConta(…) que recebe o titular por parâmetro e devolve a conta desse titular.
    public ContaBancaria getConta(String titular){
        for(ContaBancaria c : contas){
            if(c.getTitular() == titular){
                return c;
            }
        }
        return null;
    }
}