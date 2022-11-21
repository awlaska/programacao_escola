import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class CarteiraDeClientes implements Iterator {
    private List<Cliente> carteira;

    public CarteiraDeClientes(){
        this.carteira = new ArrayList<>();
    }

    public List<Cliente> getCarteira() {
        return carteira;
    }

    public Iterator<Cliente> iterator(){
        return this.carteira.iterator();
    }

    public void listaClientes(){
        Iterator<CarteiraDeClientes> it =

        while(carteira.iterator().hasNext()) {
            Cliente cli = carteira.iterator().next();
            //
            System.out.println(cli.getNome());
            //
            if (cli.getCodCliente() == 3) {
                carteira.iterator().remove();
            }
            //
            for (Cliente cl : carteira) {
                System.out.println(cl.getNome());
            }
        }
    }

    //

    public Cliente next(){
        return this.carteira.iterator().next();
    }

    public boolean hasNext(){
        return this.carteira.iterator().hasNext();
    }

    public void remove(){
        this.carteira.iterator().remove();
    }
}
