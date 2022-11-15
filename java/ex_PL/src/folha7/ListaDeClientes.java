package folha7;

import java.util.ArrayList;
import java.util.List;

public class ListaDeClientes {
    private List<Cliente> clientes;

    public ListaDeClientes(){
        this.clientes = new ArrayList<>();
    }

    public List<Cliente> getClientes(){
        return clientes;
    }

    public void addCliente(Cliente cliente){
        this.clientes.add(cliente);
    }
}