public class main {
    public static void main(String[] args) {
        /*
        try{
            int x = 5 / 0;
        } catch(ArithmeticException ex){
            System.out.println("Erro!\n" + ex.getMessage());
        }

        Cliente cli;
        try {
            cli = Cliente.getCliente(5);
            System.out.println(cli.getNome() + " tem codigo " + cli.getCodCliente());
        } catch(ClienteException ex){
            System.out.println("Erro: " + ex.getMessage());
        }*/

        CarteiraDeClientes carteira = new CarteiraDeClientes();
        carteira.getCarteira().add(new Cliente("Manuel", 1));
        carteira.getCarteira().add(new Cliente("Maria", 2));
        carteira.getCarteira().add(new Cliente("Francisco", 3));
        carteira.getCarteira().add(new Cliente("Francisca", 4));
        carteira.getCarteira().add(new Cliente("Alexandre", 5));
        carteira.getCarteira().add(new Cliente("Alexandra", 6));

        // carteira.listaClientes();

        Cliente cli;

        for(Cliente cl : carteira.getCarteira()){
            System.out.println(cl.getNome());

            if(cl.getCodCliente() == 3){
                try{
                    cli = (Cliente)cl.clone();
                    carteira.getCarteira().add(cli);
                }
                catch(Exception ex){
                    System.out.println(ex.getMessage());
                }
            }
        }
    }
}