import javax.security.auth.login.AccountNotFoundException;
import java.io.Serializable;
import java.util.*;

public class Repositorio implements Serializable {
    private Map<Integer, Animal> animais;
    private Set<Raca> racas;
    private List<Venda> vendas;

    public void registarAnimal(Animal animal) throws AnimalException{
        boolean existe = false;
        for(Animal an: this.animais.values()){
            if(animal.getNumRegisto() == an.getNumRegisto()){
                existe = true;
            }
        }
        if(!existe){
            this.animais.put(animal.getNumRegisto(), animal);
        } else throw new AnimalException("Esse numero de registo ja existe!!");
    }

    public void registarVenda(Animal animal, Date dataVenda, float pesoVivo) throws VendaException{
        if(animal.getVenda() != null){
            throws new VendaException("Este animal já foi vendido!!!");
        } else{
            Venda venda = new Venda(animal, dataVenda, pesoVivo);
        }
    }

    public Collection<Animal> getAllAnimais(){
        return this.animais.values();
    }

    //TODO verificar
    public Collection<Animal> getAllAnimals(char sexo){
        List<Animal> resultado = null;
        for(Animal an : this.animais.values()){
            if(an.getSexo() == sexo){
                resultado.add(an);
            }
        }
        return resultado;
    }

    //TODO in progress getAllAnimais(int idadeMin, int idadeMax)
    public Collection<Animal> getAllAnimais(int idadeMin, int idadeMax){
        List<Animal> resultado = new ArrayList<>();
        Date hoje = new Date();
        long dateDiff = 0;

        for(Animal an: this.animais.values()){
            dateDiff = hoje.compareTo(an.getDtNasc());
            System.out.println("Date Diff: " + dateDiff);
            if(dateDiff >= idadeMin && dateDiff <= idadeMax){
                resultado.add(an);
            }

            return resultado;
        }
    }
}