package ex1;

import java.io.Serializable;

public class Repositorio implements Serializable {
    public static Repositorio desserialize(String filename){
    Repositorio repo = new Repositorio();
        return repo;}

    public void serialize(String filename){}
}
