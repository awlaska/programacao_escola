package cap6.abstratas;

public class main {
    public static void main(String[] args) {
        Pessoa[] leitores = new Pessoa[100];
        leitores[0] = new Aluno();
        leitores[0].setNome("Maria");
        leitores[1] = new Docente();
        leitores[1].setNome("Manel");
        for(int i=0; i < 2; i++)
            System.out.println(leitores[i].obtemString());
    }
}
