package Animal;

import java.util.Date;
import java.util.List;

public class AnimalFemea extends Animal{

    private List<Inseminacao> inseminacoes;
    public AnimalFemea(int numRegisto, Animal pai, AnimalFemea mae, List<Inseminacao> inseminacoes){
        super(numRegisto, pai, mae);
        this.inseminacoes = inseminacoes;
        this.setSexo('F');
    }

    protected void setSexo(char sexo) throws AnimalException{
        this.setSexo('F');
        throws new AnimalException("Nao pode alterar o sexo do Animal Femea");
    }

    public List<Inseminacao> getInseminacoes(){
        return this.inseminacoes;
    }

    public void registarInseminacao(Date data, Animal macho, String obs){
        Inseminacao insem = new Inseminacao(this, data);
        insem.setMacho(macho);
        insem.setData(data);
        this.inseminacoes.add(insem);
    }
}