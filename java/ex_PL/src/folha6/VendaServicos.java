package folha6;

import java.util.Date;
import java.util.List;

public class VendaServicos {
    //TODO b) Codifique as classes Venda, VendaArtigos e VendaServiços,
    // que representam respetivamente uma venda genérica, uma venda de artigos e uma venda de serviços,
    // incluindo construtores, métodos de acesso (getters) e mutação (setters)
    // (não implementar um método de mutação para o número da venda,
    // devendo este ser atribuído apenas no construtor da classe).
    // Número da venda (int), Data da Venda (Date) e valor (float).
    // Uma venda de artigos é uma venda com atributo adicional artigos (List<Artigo>).
    // Uma venda de serviços é uma venda com atributo adicional serviços (List<Serviço>).
    private int numeroVenda = 0;
    private Date dataVenda;
    private float valor = 0.0f;
    private List<Artigo> artigo;
    private List<Servico> servico;

    public VendaServicos(int numeroVenda, Date dataVenda, float valor, List<Artigo> artigo, List<Servico> servico) {
        this.numeroVenda = numeroVenda;
        this.dataVenda = dataVenda;
        this.valor = valor;
        this.artigo = artigo;
        this.servico = servico;
    }

    public int getNumeroVenda() {
        return numeroVenda;
    }

    public Date getDataVenda() {
        return dataVenda;
    }

    public void setDataVenda(Date dataVenda) {
        this.dataVenda = dataVenda;
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }

    public List<Artigo> getArtigo() {
        return artigo;
    }

    public void setArtigo(List<Artigo> artigo) {
        this.artigo = artigo;
    }

    public List<Servico> getServico() {
        return servico;
    }

    public void setServico(List<Servico> servico) {
        this.servico = servico;
    }
}
