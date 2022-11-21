public class Cliente implements Cloneable{
    private String nome;
    private int codCliente;

    public Cliente(String nome, int codCliente){
        this.nome = nome;
        this.codCliente = codCliente;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getCodCliente() {
        return codCliente;
    }

    public void setCodCliente(int codCliente) {
        this.codCliente = codCliente;
    }

    public static Cliente getCliente(int codCliente) throws ClienteException{
        if(codCliente == 5){
            throw new ClienteException("Cliente nao existe!");
        } else {
            return new Cliente("Joaquim", codCliente);
        }
    }

    public Object clone() throws CloneNotSupportedException{
        return super.clone();
    }
}
