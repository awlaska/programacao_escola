import java.util.Collection;
import java.util.HashSet;
import java.util.Set;

public class Turma {
    private String  codigo;
    private Disciplina disc;
    private String designacao;
    private Set<Inscricao> inscritos;

    public Turma(String designacao){
        this.designacao = designacao;
        this.inscritos = new HashSet<>();
    }
    public void inscrever(String nome, Turma turma){
        Inscricao insc = new Inscricao();
        insc.setNomeAluno(nome);
        insc.setTurma(this);
        this.inscritos.add(insc);
    }
}
