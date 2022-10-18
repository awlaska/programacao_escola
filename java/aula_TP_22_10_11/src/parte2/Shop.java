package parte2;

import java.util.ArrayList;

// Classe para armazenar informação sobre as vendas numa loja
public class Shop {
    private String shopID; // Identificador único da loja
    private ArrayList<SalesYear> sales; // Lista para armazenar as vendas por ano
    // Construtor da classe Store
    // @param shopID O identificador da loja
    public Shop(String shopID) {
        // <a completar>
    }

    // Adicionar um valor de vendas para um dado ano e mês
    // @param year O ano para o qual se pretende adicionar o valor de vendas
    // @param month O mês para o qual se pretende adicionar o valor de vendas
    // @param value O valor de vendas a adicionar
    public void addSales(int year, int month, double value) {
        // <a completar>
    // Nota: Deve prever o caso em que é adicionado pela primeira vez um valor ao ano passado como parâmetro
    }
}