import java.io.Serializable;
import java.util.Date;

public class Venda implements Serializable {
    private Date data;
    private float pesoVivo;
    private Animal animal;

    public Venda(Animal animal, Date dataVenda, float pesoVivo){
        this.animal = animal;
        this.data = dataVenda;
        this.pesoVivo = pesoVivo;
    }

    public Date getData() {
        return data;
    }

    public void setData(Date data) {
        this.data = data;
    }

    public float getPesoVivo() {
        return pesoVivo;
    }

    public void setPesoVivo(float pesoVivo) {
        this.pesoVivo = pesoVivo;
    }

    public Animal getAnimal() {
        return animal;
    }

    public void setAnimal(Animal animal) {
        this.animal = animal;
    }
}
