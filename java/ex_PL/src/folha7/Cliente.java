package folha7;

import java.util.*;
public class Cliente {
    private String nome; // nome do cliente
    private String nif; // numero de identificação fiscal
    private Set<IArtigo> artigos; // lista de artigos
    // emprestados ao cliente
    public Cliente(){ }
    public String getNome(){
        return nome;
    }
    public String getNif(){
        return nif;
    }
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setNif(String nif){
        this.nif = nif;
    }
    public boolean adicionaArtigo(IArtigo artigo){
        return artigos.add(artigo);
    }
    public int getQtdArtigos(){
        return artigos.size();
    }
    public Set<IArtigo> getArtigos(){
        return artigos;
    }
}