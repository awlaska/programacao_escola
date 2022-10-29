public class main {
    public static void main(String[] args) {
        Animal a = new Animal();
        Peixe p = new Peixe();
        Mamifero m = new Mamifero();
        Ave ave = new Ave();

        a.setEspecie("Crocodilo");
        a.setNome("Kraken");

        p.setEspecie("Peixe-palhaço");
        p.setNome("Nemo");
        p.setComprimento(5.5f);

        m.setEspecie("Baleia");
        m.setNome("Moby-Dick");
        m.setnMesesGestacao(12);

        ave.setEspecie("Condor");
        ave.setNome("ElQuePasa");
        ave.setEnvergadura(300);

        Animal animal;

        System.out.println(p.toString());

        animal = p;
        System.out.println(animal.toString());
    }
}