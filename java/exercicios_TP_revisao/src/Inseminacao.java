import java.util.Date;

public class Inseminacao {
    private Date data;
    private AnimalFemea femea;
    private Animal macho;
    private String observacoes;

    public Inseminacao (AnimalFemea femea, Date data){
        this.femea = femea;
        this.data = data;
        this.femea.getInseminacoes().add(this);
    }

    public Date getData() {
        return data;
    }

    public void setData(Date data) {
        this.data = data;
    }

    public AnimalFemea getFemea() {
        return femea;
    }

    public void setFemea(AnimalFemea femea) {
        this.femea = femea;
    }

    public Animal getMacho() {
        return macho;
    }

    public void setMacho(Animal macho) {
        this.macho = macho;
    }

    public String getObservacoes() {
        return observacoes;
    }

    public void setObservacoes(String observacoes) {
        this.observacoes = observacoes;
    }
}
