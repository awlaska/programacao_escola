package Animal;

import java.io.Serializable;
import java.util.Date;
import java.util.HashSet;
import java.util.Set;

public class Animal implements Serializable{
    private Date dtNasc;
    private char sexo;
    private Raca raca;
    private Double pesoNasc;
    private int numRegisto;

    private Animal pai;
    private AnimalFemea mae;

    private Set<Animal> crias;

    private Venda venda;

    public Animal(int numRegisto){
        this.numRegisto = numRegisto;
        this.pai = null;
        this.mae = null;
        this.venda = null;
        this.crias = new HashSet<>();
    }

    public Animal(int numRegisto, Animal pai, AnimalFemea mae){
        this.numRegisto = numRegisto;
        this.pai = pai;
        this.mae = mae;
        this.venda = null;
        this.crias = new HashSet<>();
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

    public void setSexo(char sexo) throws AnimalException {
        this.sexo = sexo;
        if(false) throw new AnimalException("OK!");
    }

    public Raca getRaca() {
        return raca;
    }

    public void setRaca(Raca raca) {
        this.raca = raca;
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

    public AnimalFemea getMae() {
        return mae;
    }

    public void setMae(AnimalFemea mae) {
        this.mae = mae;
    }

    public Venda getVenda() {
        return venda;
    }

    public void setVenda(Venda venda) {
        this.venda = venda;
    }

    public Set<Animal> getCrias() {
        return this.crias;
    }

    public void setCrias(Set<Animal> crias) {
        this.crias = crias;
    }
}
