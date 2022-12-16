package cap6.abstratas;

public class Aluno extends Pessoa{
    private int ano;

    public Aluno(){
        super();
    }

    public Aluno(String nome){
        super(nome);
        ano = 1;
    }

    public int getAno() {
        return this.ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    @Override
    public String obtemString(){
        return "Nome: " + this.getNome() + " Ano: " + this.ano;
    }
}
