package cap6.abstratas;

public class Docente extends Pessoa{
    private String departamento;
    public Docente(){
        super();
        departamento = "n~ao tem";
    }
    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }
    @Override
    public String obtemString(){
        return "Nome: " + this.getNome() + " Dep: " + this.departamento;
    }
}
