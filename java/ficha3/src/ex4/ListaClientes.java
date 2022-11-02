package ex4;

public class ListaClientes {
    //DONE i. Um array privado para clientes, inicializado para 50 clientes;
    private Cliente[] clientes = new Cliente[50];

    //DONE ii. O construtor de instâncias da classe;
    ListaClientes(Cliente[] clientes){
        this.clientes = clientes;
    }

    //DONE iii. O Getter e o Setter para o array;
    public Cliente[] getClientes() {
        return clientes;
    }

    public void setClientes(Cliente[] clientes) {
        this.clientes = clientes;
    }


    //DOING iv. O método adicionarCliente(…) que recebe um cliente e adiciona- o ao array clientes.
    // O cliente só deve ser adicionado caso não exista nenhum outro cliente registado com o mesmo NIF.
    // Se existir um NIF duplicado, deverá ser lançada a exceção NIFRepetidoException (esta exceção deve ser criada).
    public int adicionarCliente(Cliente cliente){
        return -1;
    }

    //DONE v. O método procurarClientePorNIF(…) que recebe o NIF por parâmetro e devolve o cliente que possui esse NIF.
    // Se não existir nenhum cliente com o NIF dado,
    // deverá lançar a exceção ClienteNaoExisteException (esta exceção deve ser criada).
    public String procurarClientePorNIF(String NIF){
        try{
            for(Cliente cliente : clientes){
                if(cliente.getNIF() == NIF){
                    return cliente.toString();
                }
            }
        }
        catch(Exception ClienteNaoExisteException){
            return "-1";
        }
        return "-1";
    }
}