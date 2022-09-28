public class Main {
    public static void main(String args[]){
        Aquecedor vento = new Aquecedor();

        System.out.println(vento.toString());
        vento.ligar(); vento.ligarAquecimento();
        System.out.println(vento.toString());
        vento.setVelocidade(Velocidade.ALTA);
        System.out.println(vento.toString());
        vento.setPotResistencia(Velocidade.MEDIA);
        System.out.println(vento.toString());
        vento.desligar();
        System.out.println(vento.toString());
        vento.desligarAquecimento();
        System.out.println(vento.toString());

        if(vento.isLigado()){
            System.out.println("Está frio!");
        } else{
            System.out.println("Está calor");
        }
        
        vento.desligar();
        System.out.println(vento.toString());
    }
}