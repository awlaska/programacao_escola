import java.util.Collection;
import java.util.HashSet;
import java.util.Set;

public class Turma {
    private String  codigo;
    private Disciplina disc;
    private Set<Inscricao> inscritos;
    // private List<Inscricao> inscritos;
    // private Map<Aluno, Date> inscritos;

    public Turma(){
        this.inscritos = new HashSet<>();
        // inscritos = new ArrayList<>();
        // inscritos = new HashMap<>();
    }

    // Collection<Integer> x;
    // c = new HashSet<>();
    // c = new HashLink<>();

    // List<Integer> c;
    // Collection<Integer> x; -> error
    // c = new LinkedList<>();
    // c = new ArrayList<>();
}
