package parte2;
// Classe para registar vendas por mês
public class SalesPerMonth {
    private double[] sales;
    // Construtor da classe SalesperMonth
    public SalesPerMonth() {
        sales = new double[12];
        for(double sale : sales) sale = 0;
    }

    // Obter o valor de vendas para um dado mês
    // @param month O mês (número entre 1 e 12)
    // @return Valor das vendas para o mês indicado
    // ou -1 se o número do mês for inválido
    public double getSales(int month) {
        if ((month < 1) || (month > 12)) return -1;
        return sales[month-1];
    }

    // Adiciona uma vlor de vendas a um dado mês
    // @param month O mês (número entre 1 e 12)
    // @param value O valor de vendas a adicionar
    public void addSales(int month, double value) {
        if ((month > 0) && (month <= 12) && (value > 0))
            sales[month-1] += value;
    }

    // Obter o valor total de vendas para todos os meses
    // @return O valor total de vendas para todos os meses
    public double getTotalSales() {
        // <a completar>
        return 0.0;
    }
}