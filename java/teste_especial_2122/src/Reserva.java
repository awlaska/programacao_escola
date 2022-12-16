import java.util.Date;
import java.util.Map;

public class Reserva {
    private int nrReserva;
    private Date data;
    private float preco;
    private Map<String, Claque> claque;

    public Reserva(){

    }

    public Reserva(int nrReserva, Date data, float preco, Map<String, Claque> claque){
        this.nrReserva = nrReserva;
        this.data = data;
        this.preco = preco;
        this.claque = claque;
    }

    //TODO
    public void acrecentarClaque(String nome, Claque claques) throws ReservaException {
        boolean existe = false;
        for(String cl : this.claque.keySet()){
            if(nome.equals(cl))
                existe = true;
        }
            if(existe)
                throw new ReservaException("Nome da claque já existe!");
            else
                this.claque.put(nome, claques);
    }
}
