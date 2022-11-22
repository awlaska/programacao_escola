public class AnimalFemea extends Animal{
    public AnimalFemea(int numRegisto, Animal pai, Animal mae){
        super(numRegisto, pai, mae);
        this.setSexo('F');
    }
}