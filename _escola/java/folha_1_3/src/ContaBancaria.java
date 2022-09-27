import java.time.Instant;
import java.util.Date;

public class ContaBancaria {
    // a) Uma variável de instância de acesso privado, titular, com tipo String.
    private String titular;

    // b) Uma variável de instância de acesso privado, saldo, com tipo double, e com valor 0.0 por defeito.
    private double saldo = 0.0;

    // c) Uma variável de instância de acesso privado, dataAbertura, com tipo Date,
    // e com valor por defeito a data de hoje.
    private Date dataAbertura = new Date();

    // d) Um construtor de instâncias da classe que recebe por parâmetro o nome do titular
    // e cria uma conta bancária para esse titular, na data de hoje, e com saldo zero.

    public void ContaBancaria(String titular) {
        this.titular = titular;
        this.saldo = 0.0;
        this.dataAbertura = Date.from(Instant.now());
    }

    // e) Os métodos getters e setters para o saldo. E, apenas o método getter para a data de
    // abertura e para o titular.
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public String getTitular() {
        return titular;
    }

    public Date getDataAbertura() {
        return dataAbertura;
    }

    // f) Um método getInformaçãoConta() que retorna uma String com o titular,
    // o saldo da conta com duas casas decimais e a data de abertura da conta no formato DD/MM/YYYY.
    // Ex.: Titular: José Fonseca Saldo: €321.50 Data Abertura: 21/2/2017.
    public void getInformacaoconta(){
        System.out.println("O titular " + getTitular() + " abriu a conta a " + getDataAbertura() +
                " e tem o saldo de " + getSaldo() + " euros na conta.");
    }
    
    // g) Um método depositar(…) que recebe o valor a depositar na conta (double) e atualiza o respetivo saldo.
    public void depositar(double valor){
        this.saldo = this.saldo + valor;
    }

    // h) Um método levantar(…) que recebe o valor a levantar da conta (double) e atualiza o respetivo saldo.
    // Não devem ser permitidos levantamentos que coloquem o saldo negativo.
    public void levantar(double valor){
        if(saldo-valor < 0){
            System.out.println("Não foi possível efetuar a operação.");
        }
        this.saldo = this.saldo - valor;
    }
}
