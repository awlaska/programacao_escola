package parte2;

// Uma classe para registar as vendas de um ano
public class SalesYear {
    private int year; // Ano para o qual se pretende registar as vendas
    private SalesPerMonth sales; // Objeto para registar as vendas mensais

    // Construtor da classe SalesYear
    // @param year Ano para o qual se pretende registar as vendas
    public SalesYear(int year) {
        this.year = year;
        sales = new SalesPerMonth();
    }

    // Devolve o ano para o qual se regista as vendas
    // @return O ano de vendas
    public int getYear() {
        return year;
    }
    // Devolve o objeto com os dados das vendas por mês
    // @return O objeto do tipo SalesPerMonth
    public SalesPerMonth getSales() {
        return sales;
    }

    //Imprime as vendas registados
    // Este método deve imprimir o ano de registo e a listagem dos valores
    // de vendas para cada mês, por exemplo:
    // ANO DE REGISTO: 2014
    // VENDAS:
    // MÊS 1 - 123 euros
    // MÊS 2 - 234 euros
    // ...
    // MÊS 12 - 2239 euros
    public void printSalesPerMonth() {
        // <a completar>
    }
}
