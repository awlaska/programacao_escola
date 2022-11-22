import java.util.Date;

public class Animal {
    private Date dtNasc;
    private char sexo;
    private Double pesoNasc;
    private int numRegisto;
    private Animal pai;
    private Animal mae;

    public Animal(int numRegisto, Animal pai, Animal mae){
        this.numRegisto = numRegisto;
        this.pai = pai;
        this.mae = mae;
    }

    public void setSexo(char sexo){
        this.sexo = sexo;
    }

    public Date getDtNasc() {
        return dtNasc;
    }

    public void setDtNasc(Date dtNasc) {
        this.dtNasc = dtNasc;
    }

    public char getSexo() {
        return sexo;
    }

    public Double getPesoNasc() {
        return pesoNasc;
    }

    public void setPesoNasc(Double pesoNasc) {
        this.pesoNasc = pesoNasc;
    }

    public int getNumRegisto() {
        return numRegisto;
    }

    public void setNumRegisto(int numRegisto) {
        this.numRegisto = numRegisto;
    }

    public Animal getPai() {
        return pai;
    }

    public void setPai(Animal pai) {
        this.pai = pai;
    }

    public Animal getMae() {
        return mae;
    }

    public void setMae(Animal mae) {
        this.mae = mae;
    }
}
