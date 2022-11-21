import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.List;

public class Repositorio implements Serializable{
    private List<Cliente> clientes;
    private List<Produto> produtos;
    private List<Fatura> faturas;

    public void serializar(String filename){
        try{
            FileOutputStream fileOut = new FileOutputStream(filename);
            ObjectOutputStream
        }
    }
    // TODO copiar do ppt sor cruz aula 9
}
