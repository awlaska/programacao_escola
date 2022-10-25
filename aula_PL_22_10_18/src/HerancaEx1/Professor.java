package HerancaEx1;

public class Professor {
    protected String nome;
    protected String matricula;
    protected int idade;

    public Professor(String n, String m, int i) {
        nome = n;
        matricula = m;
        idade = i;
    }

    public String retornaNome(){
        return nome;
    }

    public String retornaMatricula(){
        return matricula;
    }

    public int retornaIdade(){
        return idade;
    }

    public double retornaVencimento(){
        return 0;
    }
}
