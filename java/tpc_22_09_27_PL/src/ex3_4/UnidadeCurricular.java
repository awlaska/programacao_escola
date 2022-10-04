package ex3_4;

public class UnidadeCurricular {
    // a. Um array, ‘alunos’, do tipo Aluno (codificado no exercício anterior);
    Aluno alunos[] = new Aluno[];

    // b. Um construtor de instâncias da classe, sem argumentos, que inicializa o array para 20 alunos;
    public Aluno Alunos(){
       Aluno[] alunos = new Aluno[10];
    }

    // c. Os métodos Getter e Setter para o array;
    public Aluno[] getAlunos() {
        return alunos;
    }

    public void setAlunos(Aluno[] alunos) {
        this.alunos = alunos;
    }

    // d. O método adicionarAluno(…) que recebe um Aluno e adiciona-o ao array.
    // O método deve validar que o número do aluno inserido não é duplicado;
    public void adicionarAluno(Aluno[] alunos){
        for (int j = 0 ; j <=alunos.length; j++) {
            if (alunos[j] != null) {
                return ;
                break;
            }
        }
        new Aluno[] = aluno;
    }

    // e. O método obterAluno(…) que recebe o número do cartão de aluno e devolve o mesmo;
    // f. O método listarAlunos() que lista a informação de todos os alunos da turma, a sua média e a sua melhor nota.
    // g. O método obterAlunoMelhorMedia() que calcula as médias dos alunos e devolve o aluno com melhor a média.
    // Se existirem alunos com a mesma média, devolver o aluno com o número de cartão mais baixo.
}
